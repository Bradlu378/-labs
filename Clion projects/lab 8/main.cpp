#include <iostream>  
#include <string>  
#include <cctype>  
#include <sstream>  
#include <algorithm>  
#include <vector>  
  
using namespace std;  
  
const string origText = "The parade of hundred of demons was held in Japan on December 24, 2017. The main figure was the special rank shaman Suguru Geto, who managed more than 2000 curses. Stop it was only through the efforts of student 1 year of the Magic College Yuta Okkotsu, who with a curse of special rank defeated Geto. During the incident, about 183 people were injured, 546 were wounded.";  
  
string highlightWord(string text, int symbolIndex, int lastIndex) {  
    text.insert(symbolIndex, "\033[7m");  
    text.insert(lastIndex + 5, "\033[0m"); // 4 символа + смещение относительно индекса  
    return text;  
}
  
bool isConsonantWord(const string& word) {  
    const string consonants = "bcdfghjklmnpqrstvwxz";  
    //if (word.empty()) return false; legacy пусть останется на всяк  
    char first = tolower(word[0]);  
    char last = tolower(word[word.size() - 1]);  
    return consonants.find(first) != string::npos && consonants.find(last) != string::npos;  
}  
  
void punctRemove(string& word, bool& punct) {  
    if (ispunct(word.back())) {  
        word.pop_back();  
        punct = true;  
    } else punct = false;  
}  
  
void task1() {  
    system("pause");  
    int wordcount = 0;  
    string st1 = origText;  
    istringstream stream(st1);  
  
    long start = 0;  
    long offset = 0;  
    bool punct = false;  
    string word;  
    while (stream >> word) {  
        long end = start + word.length() - 1;  
        punctRemove(word, punct);  
        if (isConsonantWord(word)) {  
            wordcount++;  
            st1 = highlightWord(st1, start + offset, end + offset - punct);  
            offset += 8;  
        }  
        start = end + 2;  
    }  
    cout << st1 << endl;  
    cout << "Слов начинающееся и заканчивающееся на согласную - " << wordcount;  
}  
void task2() {  
    cout << "\n\n#2" << endl;  
    int wordCount = 1;  
    istringstream stream(origText);  
    string word;  
    while (stream >> word) {  
        if (word.back() == '.') break;  
        if(word.length()%2==0) cout << word << " ";  
        wordCount++;  
    }  
    cout << "\n" <<wordCount;  
}  
string decToBase17(int dec) {  
    string b17;  
    const string digits = "0123456789ABCDEFG";  
  
    while (dec > 0) {  
        int tail = dec % 17;  
        b17 += digits[tail];  
        dec /= 17;  
    }  
  
    reverse(b17.begin(), b17.end());  
    return b17;  
}  
  
void task3() {  
    cout << "\n\n#3" << endl;  
    istringstream stream(origText);  
    int number;  
  
    stream >> number;  
    cout << decToBase17(94);  
}  
  
void task4() {  
    cout << "\n\n#4" << endl;  
    std::vector<char> chars;  
  
    for (char ch : origText) {  
        ch = std::tolower(ch);  
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {  
            chars.push_back(ch);  
        }  
    }  
    sort(chars.begin(), chars.end());  
  
    for (char vowel : chars) {  
        cout << vowel << " ";  
    }  
}  
  
bool firstLetter(string& word) {  
    char firstChar = tolower(word[0]);  
    return (firstChar == 'a' || firstChar == 'e' || firstChar == 'i' || firstChar == 'o' || firstChar == 'u');  
}  
  
void task5() {  
    cout << "\n\n#5" << endl;  
    stringstream ss(origText);  
    string word;  
    bool n = false;  
    while (ss >> word) {  
        if (firstLetter(word)) {  
            punctRemove(word,n);  
            cout << word << " ";  
        }  
    }  
}  
  
int main() {  
    system("chcp 65001 > nul");  
    task1();  
    task2();  
    task3();  
    task4();  
    task5();  
    cin.get();  
}