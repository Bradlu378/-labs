#include <iostream>  
using namespace std;  
  
int main() {  
    int r;  
    system("chcp 65001 > nul");  
    cout << "Введите размер массивов: ";  
    cin >> r;  
    int* a = new int[r];  
    int* b = new int[r];  
  
    for(int i = 0;i<r;i++) {  
        cin >> *(a + i);  
    }  
    for(int i = 0;i<r;i++) {  
        cin >> *(b + i);  
    }  
    for (int i = 0; i < r; i++) {  
        cout << abs(*(b + i) - *(a + i)) << endl;  
    }  
    delete[] a;  
    delete[] b;  
    system("pause");  
}