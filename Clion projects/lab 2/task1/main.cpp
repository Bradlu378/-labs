#include <iostream>  
using namespace std;  
  
int main() {  
    cout << "Что такое ЦП?" << endl;  
    cout << "1. Центральный процесс" << endl;  
    cout << "2. Центральное питание" << endl;  
    cout << "3. Центральный процессор" << endl;  
    cout << "\nВвод: ";  
    short input;  
    cin >> input;  
    cout << (input == 3 ? "Ответ верный" : "Ответ не верен") << endl;  
}