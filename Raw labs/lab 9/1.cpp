#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <vector>

using namespace std;

int main() {
    system("chcp 65001 > nul");
    struct Students {
        string surname;
        string name;
        string fathName;
        int group;
        int gradeBook;
        int marks[2];
    };
    int numberOfStudents;
    string filename, readingFile;
    cout << "Введите количество студентов: ";
    cin >> numberOfStudents;
    cout << endl;
    vector <Students> st;
    Students stud;
    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Введите информацию о " << i + 1 << " студенте:" << endl << "Введите фамилию: ";
        cin >> stud.surname;
        cout << "Введите имя: ";
        cin >> stud.name;
        cout << "Введите отчество: ";
        cin >> stud.fathName;
        cout << "Введите номер группы: ";
        cin >> stud.group;
        cout << "Введите номер зачётной книжки: ";
        cin >> stud.gradeBook;
        for (int j = 0; j < 2; j++) {
            cout << "Введите " << j + 1 << " оценку: ";
            cin >> stud.marks[j];
        }
        cout << endl;
        st.push_back(stud);
    }
    cout << "Введите название файла: ";
    cin >> filename;
    filename += ".txt";
    ofstream writingF(filename);
    if (writingF.is_open()) {
        for(Students i : st){
            writingF << i.surname << " " << i.name << " " << i.fathName << " "
                     << i.group << " " << i.gradeBook << " " << i.marks[0] << " " << i.marks[1] << endl;

        }
        cout << "Запись значений была произведена успешно!" << endl;
    }
    else {
        cerr << "Произошла ошибка открытия файла" << endl;
        return 0;
    }
    writingF.close();

    ifstream readingF(filename);
    if (readingF.is_open()) {
        cout << endl << "Данные, которые были занесены в файл:" << endl;
        while (getline(readingF, readingFile))
            cout << readingFile << endl;
    }
    else {
        cerr << "Произошла ошибка при открытии файла.";
        return 0;
    }
    readingF.close();
}