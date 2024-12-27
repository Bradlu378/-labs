#include <cmath>
#include <iostream>
using namespace std;
int main() {
int a,b,num = 0;
	cin >> a >> b;
	for (;a<=b;a++){
	num += a;
	}
	cout << "Сумма: " << num << endl;
}