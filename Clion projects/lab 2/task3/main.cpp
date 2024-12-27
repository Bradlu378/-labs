#include <iostream>  
#include <string>  
  
using namespace std;  
  
int main() {  
    int number, lastDigit, lastTwoDigits;  
  
    cout << "Введите число от 1 до 999: ";  
    cin >> number;  
  
    if (number < 1 || number > 999) {  
        cout << "Введите число от 1 до 999" << endl;  
        return 1;  
    }  
  
    lastDigit = number % 10;  
    lastTwoDigits = number % 100;  
  
    string ending;  
  
    if (lastTwoDigits >= 11 && lastTwoDigits <= 14) {  
        cout << number << " " << "рублей" << endl;  
    } else if (lastDigit == 1) {  
        cout << number << " " << "рубль" << endl;  
    } else if (lastDigit >= 2 && lastDigit <= 4) {  
		        cout << number << " " << "рубля" << endl;  
    } else {  
        cout << number << " " << "рублей" << endl;  
    }  
}