#include <iostream>
#include <cmath>

using namespace std;

class solution{
    public:
        int lines, columns, counter = 0;
        float sum = 0, avg;

        void resh(){
            cout << "Введите количество строк:" << endl;
            cin >> lines;
            cout << "Введите количество столбцов:" << endl;
            cin >> columns;
            float M[lines][columns];
            for (int i = 0; i < lines; i++) {
                for (int j = 0; j < columns; j++) {
                    cout << "Введите элемент М[" << i << "][" << j << "] (элемент стаолбца " << columns-1 << " обязательно 0 или 1):";
                    cin >> M[i][j];
                }
            }

            for (int i = 0; i < lines; i++) {
                if (M[i][columns-1] == 1) {
                    for (int j = 0; j < columns; j++) {
                        sum += M[i][j];
                        counter++;
                    }
                }
            }
            if (counter != 0) {
                avg = sum/counter;
                cout << "Результат:" << avg << endl;
            } else {
                cout << "Строк, оканчивающихся на 1 нет." << endl;
            }
                }
};

int main()
{
    setlocale(.1251, "Russian");

    solution sol;

    sol.resh();

    return 0;
}
