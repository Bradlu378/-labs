#include <iostream>  
using namespace std;  
  
void sort(int arr[], int& length) {  
    bool isSorted = false;  
    while (!isSorted) {  
        isSorted = true;  
  
        for (int i = 0; i < length - 1; i += 2) {  
            if (arr[i] > arr[i + 1]) {  
                swap(arr[i], arr[i + 1]);  
                isSorted = false;  
            }  
        }  
  
        for (int i = 1; i < length - 1; i += 2) {  
            if (arr[i] > arr[i + 1]) {  
                swap(arr[i], arr[i + 1]);  
                isSorted = false;  
            }  
        }  
    }  
    for (int i = 0; i < length; i++) {  
        cout << arr[i] << " ";  
    }  
    cout << endl;  
}  
  
int main() {  
    int c, r;  
    system("chcp 65001 > nul");  
    cout << "Введите количество строк: ";  
    cin >> r;  
    cout << "Введите количество столбцов: ";  
    cin >> c;  
  
    int** matrix = new int*[r];  
    for (int i = 0; i < r; ++i) {  
        matrix[i] = new int[c];  
    }  
  
    cout << "Заполните массив \n" << endl;  
    for (int i = 0; i < r; i++) {  
        for (int k = 0; k < c; k++) {  
            cin >> matrix[i][k];  
        }  
    }  
  
    for (int i = 0; i < r; i++) {  
        int *tempArr = new int[c];  
        for (int k = 0; k < c; k++) {  
            tempArr[k] = matrix[i][k];  
        }  
        sort(tempArr,c);  
        delete[] tempArr;  
    }  
  
  
    for (int i = 0; i < r; ++i) {  
        delete[] matrix[i];  
    }  
    delete[] matrix;  
  
    system("pause");  
}  
//  -1 7 0 1 5
//  2 0 -8 0 12  
//  50 12 0 5 -9  
//  -34 0 0 -7 0  
//  0 1 11 0 -50  
  
  
//  1 -2 3 4  
//  -1 5 6 -3  
//  -2 -7 0 8  
//  9 -5 1 2