#include <iostream>  
using namespace std;  
  
int main() {  
    int final[8], num;  
    for(int i = 0; i < 8; i++) {  
        cin >> num;  
        final[i] = num % 10;  
    }  
    for(int i : final) {  
        cout << i << " ";  
    }  
}