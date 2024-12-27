#include <iostream>  
using namespace std;  
  
int main() {  
    int n, m, sum = 0;  
  
    cout << "Введите число n: ";  
    cin >> n;  
    cout << "Введите число m: ";  
    cin >> m;  
  
    for (int i = 0; i < m; i++) {  
        sum += n % 10;  
        n /= 10;  
    }  
  
    cout << "Сумма: " << sum << endl;  
}