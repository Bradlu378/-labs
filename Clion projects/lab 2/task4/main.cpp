#include <iostream>  
#include <string>  
  
using namespace std;  
  
int main() {  
int year, month, day , year1, month1, day1;  
    cout << "Введите в каждой строке дату рождения 1го человека в формате DD,MM,YYYY" << endl;  
    cin >> day >> month >> year;  
    cout << "Введите в каждой строке дату рождения 2го человека в формате DD,MM,YYYY" << endl;  
    cin >> day1 >> month1 >> year1;  
    if (year > year1 || year < year1) {  
        cout << (year > year1 ? "1й человек старше" : "2й человек старше") << endl;  
        exit(0);  
    }  
    if (month > month1 || month < month1) {  
        cout << (month > month1 ? "1й человек старше" : "2й человек старше") << endl;  
        exit(0);  
    }  
    if (day > day1 || day < day1) {  
        cout << (day > day1 ? "1й человек старше" : "2й человек старше") << endl;  
        exit(0);  
    }  
    cout << "Возраст одинаков" << endl;  
}