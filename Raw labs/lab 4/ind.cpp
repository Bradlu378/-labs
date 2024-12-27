#include <iostream>  
using namespace std;  
  
int main() {  
   const int numbersAmount = 1000;  
   int nums[numbersAmount];  
	   int tempNum = NULL;  
      for (int i = 0; i < numbersAmount; i++) {  
         nums[i] = rand();  
      }  
      while (true) {  
         for (int i = 0;i < numbersAmount; i++) {  
            if (nums[i] > nums[i + 1]) {  
               tempNum = nums[i];  
               nums[i] = nums[i + 1];  
               nums[i + 1] = tempNum;  
            }  
         }  
         if (tempNum == NULL)break;  
         tempNum = NULL;  
         for (int i = 1;i < numbersAmount; i += 2) {  
            if (nums[i] > nums[i + 1]) {  
               tempNum = nums[i];  
               nums[i] = nums[i + 1];  
               nums[i + 1] = tempNum;  
            }  
         }  
         if (tempNum == NULL)break;  
         tempNum = NULL;  
      }  
   for (int i = 0; i < numbersAmount; i++) {  
      cout << nums[i] << endl;   
      }
   system("read");  
   }  
// ~3,6мс на 1к элементов (при фиксированной частоте cpu i3 8130u 2.2Ghz) :3