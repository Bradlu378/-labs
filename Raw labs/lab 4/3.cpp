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
  
    //cout << "Заполните массив \n" << endl;  
    char** matrix = new char*[r];  
    for (int i = 0; i < r; ++i) {  
        matrix[i] = new char[c]{0};  
    }  
  
    for(int i = 0;i<c;i++) {  
        for(int k = 0;k<r;k++) {  
            if (i%2==0) matrix[k][i] = '1';  
            else {  
                if (k%2==0) matrix[k][i] = '0';  
                else matrix[k][i] = '1';  
            }  
        }  
    }  
    cout << endl;  
    matrixToString(matrix);  
  
    for (int i = 0; i < r; ++i) {  
        delete[] matrix[i];  
    }  
    delete[] matrix;  
    system("read");  
}