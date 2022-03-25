#include <iostream>
#include <cmath>

using namespace std;

class solution{
    public:
        int A[10], C[10]; //Объявляем массивы размерностью в 10 целочисленных значений
        int i, n, imax;
        float max, otn;

        void resh(){
            cout << "Введите размерность массива А: ";
            cin >> n;
            cout << "Пор.Номер   А   С" << endl;

            for (i = 0; i < n; i++){
                A[i] = rand() % 10; //Заполняем массив случайными числами от 0 до 9 включительно
                C[i] = rand() % 10;
                cout << i + 1 << "     " << A[i] << "    " << C[i] << endl;
                otn = float(A[i]) / float(C[i]);
                if (C[i] > 0 && max < otn){
                    max = otn;
                    imax = i;
                }
            }
    cout << "Наибольшее из отношений = " << max << endl;
    cout << "Индекс элемента = " << ++imax;
    }

};

int main()
{
    setlocale(.1251, "Russian");
    solution sol;
    sol.resh();
return 0;
}
