#include <iostream>

using namespace std;

class solution{

    public:
        int num;
        float* X = new float[num];
        float* Y = new float[num];

        void cicls(){
            cout << "Введите количество элементов массива:" << endl;
            cin >> num;
            cout << "Введите каждый элемент массива:" << endl;
            for (int i = 0; i < num; i++){
                cin >> X[i];
            }
            for (int i = 0; i < num; i++){
                if (i == 0)Y[i] = 0;
                else if (i != 0)Y[i] = X[i] / i;
            }
            for (int i = 0; i < num; i++){
                cout << Y[i] << " ";
            }
            delete[]X;
            delete[]Y;
            return;
        }
};

int main(){
    setlocale(.1251, "Russian");
    solution sol;
    sol.cicls();
return 0;
}
