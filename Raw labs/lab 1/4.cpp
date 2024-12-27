#include <iostream>  
#include <string>  
  
using namespace std;  
int main() {  
    string number;  
    int a = 0, b = 1;  
   cin >> number;  
    for (short i = 0; i <= number.length(); ++i) {  
        if(isdigit(number[i])) {  
            a += number[i] - '0';  
            b *= number[i] - '0';  
        }  
    }  
    cout << a << endl;  
    cout << b << endl;  
}