#include <iostream>  
using namespace std;  
  
int main() {  
int flat, flatPerFloor;  
    cout << "\nВведите количество квартир на этаже: ";  
    cin >> flatPerFloor;  
    cout << "\nВведите номер квартиры: ";  
    cin >> flat;  
    cout << ((flat/flatPerFloor)%2 ? "Лифт не останавливается" : "Лифт остановтся на этаже - " + to_string((flat/flatPerFloor)+1));  
}