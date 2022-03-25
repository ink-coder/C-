#include <iostream>
#include <windows.h>

using namespace std;

class solition{
public:
    int N;
    struct blood_pressure{
        float high;
        float low;
    };

    struct people{
        short age;
        bool sex; // 0 - жен, 1 - муж.
        float height;
        float weight;
        float temp;
        blood_pressure bp;
    };
    people M[100];
    int output(int N, people M[], int num) {
        //Вывод на проверку
        cout << "Вывод информации о человеке " << num << ":" << endl;
        cout << "Возраст:" << M[num].age << endl;
        cout << "Пол:" << M[num].sex << endl;
        cout << "Рост:" << M[num].height << endl;
        cout << "Вес:" << M[num].weight << endl;
        cout << "Температура:" << M[num].temp << endl;
        cout << "Систолическое (верхнее) давление:" << M[num].bp.high << endl;
        cout << "Диастолическое (нижнее) давление:" << M[num].bp.low << endl;
        return 0;
    }

    void start_input(){

        cout << "Введите количество записей (людей):" << endl;
        cin >> N;

        for (int i = 0; i < N; i++) {
            cout << "Введите данные для человека " << i << ":" << endl;
            cout << "Возраст:";
            cin >> M[i].age;
            cout << "Пол (0 для женщин, 1 для мужчин):";
            cin >> M[i].sex;
            cout << "Рост:";
            cin >> M[i].height;
            cout << "Вес:";
            cin >> M[i].weight;
            cout << "Температура:";
            cin >> M[i].temp;
            cout << "Систолическое (верхнее) давление:";
            cin >> M[i].bp.high;
            cout << "Диастолическое (нижнее) давление:";
            cin >> M[i].bp.low;
        }
        resh();
    }

    void resh(){
        for (int i = 0; i < N; i++) {
        if ( M[i].sex == 1 && M[i].age < 25 && M[i].bp.high > 140) output(N, M, i);
        }
    }
};

int main()
{
    //setlocale(.1251, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    solition sol;

    sol.start_input();

    return 0;
}
