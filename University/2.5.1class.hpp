#include <iostream>
#include <cmath>

#define strok 3
#define stolbec 6

using namespace std;

class solution{
    public:
        float R, V;
        float M[strok][stolbec];
        int count = 0;

        void resh(){
            for (int i = 0; i < strok; i++) {
            for (int j = 0; j < stolbec; j++) {
                cout << "Введите элемент М[" << i << "][" << j << "]:" << endl;
                cin >> M[i][j];
            }
        }

        cout << "Введите R:" << endl;
        cin >> R;
        V = 4/3*3.1415*pow(R,3);

        cout << "Следующие стобцы формируют парарллелепипед по объёму больший чем V:" << endl;
        for (int j = 0; j < stolbec; j++) {
            if ( M[0][j]*M[1][j]*M[2][j] > V) {
                cout << j << endl;
                count++;
            }
        }
        if (count == 0) cout << "Таких столбцов нет." << endl;
        }
};

int main()
{
    setlocale(.1251, "Russian");

    solution sol;

    sol.resh();

    return 0;
}
