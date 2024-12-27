#include <iostream>  
using namespace std;  
  
int main() {  
    system("chcp 65001 > nul");  
    int a;  
    cin >> a;  
    if (a%2==0 || a%3==0) {  
        cout << "условие истинно" << endl;  
    } else cout << "условие ложно" << endl;  
    system("pause");  
}