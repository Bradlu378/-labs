#include <iostream>  #include <cmath>  #include <iomanip>    
    
using namespace std;    
    
int main() {    
    double a, b, h, s, y, x;    
    long double factorial, r, c, i, n;    
    //cout << "Введите значения A, B, N \n";// 0.1|1|80 из задания    
    //cin >> a >> b >> n;    a = 0.1;    
b = 1;    
    n = 80;    
    h = (b - a) / 10;    
    x = a;    
    r = 1;    
    while (x <= b) {    
        s = 1;    
        for (i = 1; i <= n; i++) {    
            c = 2 * i;    
            for (factorial = 1; factorial <= c; factorial++) {    
                r = r * factorial;    
            }    
            s += pow(-1, i) * pow(x, c) / r;    
            r = 1;    
        }    
        y = cos(x);    
        cout << setw(15) << x << setw(15) << y << setw(15) << s << endl;    
        x += h;    
    }    
}