#include <iostream>
#include <windows.h>

using namespace std;

struct Student {
    //short id;
    string group_num;
    char FIO[255];
    short BornYear;
    bool sex; //0 - девочка, 1 - мальчик.
    short phys_grade;
    short mat_grade;
    short inf_grade;
    float salary;
};

int output(int N, Student M[], int num) {
    //Вывод на проверку
    if (num == -1) {
        for (int i = 0; i < N; i++) {
            cout << "Вывод информации о студенте " << i << ":" << endl;
            cout << "Номер группы:" << M[i].group_num << endl;
            cout << "ФИО:" << M[i].FIO << endl;
            cout << "Год рождения:" << M[i].BornYear << endl;
            cout << "Пол:" << M[i].sex << endl;
            cout << "Оценка по физике:" << M[i].phys_grade << endl;
            cout << "Оценка по математике:" << M[i].mat_grade << endl;
            cout << "Оценка по информатике:" << M[i].inf_grade << endl;
            cout << "Стипендия:" << M[i].salary << endl;
        }
    } else {
        cout << "Вывод информации о студенте " << num << " :" << endl;
        //cout << "Номер группы:" << M[num].group_num << endl;
        cout << "ФИО:" << M[num].FIO << endl;
        cout << "Год рождения:" << M[num].BornYear << endl;
        //cout << "Пол:" << M[num].sex << endl;
        cout << "Оценка по физике:" << M[num].phys_grade << endl;
        cout << "Оценка по математике:" << M[num].mat_grade << endl;
        cout << "Оценка по информатике:" << M[num].inf_grade << endl;
        cout << "Стипендия:" << M[num].salary << endl;
    }
    return 0;
}

int main()
{
    //setlocale(.1251, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int N;
    float salBonus;

    cout << "Введите количество записей (студентов):" << endl;
    cin >> N;
    Student M[N];
    //Закомментированн ввод полей для неиспользующихся, для экономии времени
    for (int i = 0; i < N; i++) {
        cout << "Введите данные для студента " << i << ":" << endl;
        cout << "Номер группы:";
        cin >> M[i].group_num;
        cout << "ФИО:";
        cin >> M[i].FIO;
        cout << "Год рождения:";
        cin >> M[i].BornYear;
        cout << "Пол:";
        cin >> M[i].sex;
        cout << "Оценка по физике:";
        cin >> M[i].phys_grade;
        cout << "Оценка по математике:";
        cin >> M[i].mat_grade;
        cout << "Оценка по информатике:";
        cin >> M[i].inf_grade;
        cout << "Стипендия:";
        cin >> M[i].salary;
    }

    output(N, M, -1);

    cout << "Введите надбавку к стипендии:" << endl;
    cin >> salBonus;
    //Поиск отличников по физике и их повышение
    for (int i = 0; i < N; i++) {
        if ( !M[i].group_num.compare("Ф3-97") && M[i].phys_grade == 5) {
            M[i].salary += salBonus;
            output(N, M, i);
        }
    }
    return 0;
}
