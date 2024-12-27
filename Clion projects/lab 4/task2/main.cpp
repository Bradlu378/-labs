#include <iostream>  
using namespace std;  
  
int c,r;  
  
void clearTerm(){  
    system("clear");  
}  
  
void matrixToString(char** matrix) {  
    clearTerm();  
    for(int i = 0; i < c; i++) {  
        for(int k = 0; k < r; k++){  
                cout << matrix[i][k] << " ";  
        }  
        cout << endl;  
    }  
}  
  
  
int main() {  
  
    cout << "Введите количество столбцов: ";  
    cin >> c;  
    cout << "Введите количество строк: ";  
    cin >> r;  
    clearTerm();  
  
    cout << "Заполните массив \n" << endl;  
    char** matrix = new char*[r];  
    for (int i = 0; i < r; ++i) {  
        matrix[i] = new char[c]{0};  
    }  
    string* words = new string[c];  
  
  
    for(int i = 0;i<c;i++) {  
        for(int k = 0;k<r;k++) {  
            cin >> matrix[i][k];  
            matrixToString(matrix);  
        }  
    }  
    cout << endl;  
    matrixToString(matrix);  
  
  
    for(int i = 0;i<c;i++) {  
        for(int k = 0;k<r;k++) {  
            if (k%2==0) {  
                words[i] += matrix[k][i];  
            }  
        }  
    }  
  
    matrixToString(matrix);  
    cout << endl;  
    for(int i = 0;i < c; i++){  
        cout << words[i] << " - Слово #" << i+1 << endl;  
    }  
  
    for (int i = 0; i < r; ++i) {  
        delete[] matrix[i];  
    }  
    delete[] matrix;  
    delete[] words;  
    system("read");  
}