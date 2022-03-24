#include <iostream>
#include <cmath>
#define lines 5
#define columns 5

using namespace std;

int main()
{
    setlocale(.1251, "Russian");

    int counter;

    float M[lines][columns];
    //Следующий двойной цикл, я надеюсь, не считается за часть алгоритма т.к. это необходимо для ввода данных
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Введите элемент М[" << i << "][" << j << "]:";
            cin >> M[i][j];
        }
    }
    //Вывод всего массива
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    //Поиск нулевых элементов в строках
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++) {
            if (M[i][j] == 0) {
                counter++;
                break;
            }
        }
    }
    //Замена первой строки на диагональ
    if (counter > 2) {
        int i = 0;
        for (int j = 0; j < columns; j++) {
            M[0][j] = M[i][j];
            i++;
        }
    }
    //Вывод всего массива
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
