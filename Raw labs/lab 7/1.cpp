#include <iostream>  
#include <vector>  
using namespace std;  
int n;  
void getMaxElement(int** matrix) {  
    vector<int> maxElements(0);  
    for(int j =n; j > 0; j-- ){  
        int max = matrix[0][0];  
        for (int i = 0; i < n; i++) {  
            for (int k = 0; k < n; k++) {  
                if(matrix[i][k]>max)  
                    max = matrix[i][k];  
            }  
        }  
        n--;  
        maxElements.push_back(max);  
    }  
    cout << "Макс элементы порядков:" << endl;  
    for (int i = 0; i < maxElements.size(); i++) {  
        cout << "Порядка " << maxElements.size()-i << " - " << maxElements[i] << " " << endl;  
    }  
}  
  
int main(){  
 cin >> n;  
 int** matrix = new int*[n];  
    for (int i = 0; i < n; ++i) {  
        matrix[i] = new int[n];  
    }  
    cout << "Заполните массив" << endl;  
    for (int i = 0; i < n; i++) {  
        for (int k = 0; k < n; k++) {  
            cin >> matrix[i][k];  
        }  
    }  
    getMaxElement(matrix);  
    for (int i = 0; i < n; ++i) {  
        delete[] matrix[i];  
    }  
    delete[] matrix;  
}  
//1 2 3  
//4 5 6  
//7 8 9