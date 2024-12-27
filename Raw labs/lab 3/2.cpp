#include <iostream>
using namespace std;
int main(){
    int nums = 0;
    while(true) {
        int num;
        cin >> num;
        if (num == 0) break;
        if (num>0) {
            nums += num;
        }
    }
    cout << nums << endl;
}