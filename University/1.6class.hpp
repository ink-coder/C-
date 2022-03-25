#include <iostream>
#include <cmath>

using namespace std;

class solution{
    public:
        int N;
        float A, X1, dX, X, Y;

        void viraz(){
        cout << "Введите N:" << endl;
        cin >> N;
        cout << "Введите A:" << endl;
        cin >> A;
        cout << "Введите X1:" << endl;
        cin >> X1;
        cout << "Введите dX:" << endl;
        cin >> dX;
        X = X1;

        for (int i = 0; i < N; i++){
            if (X < 0) {
                Y = - sqrt(sqrt(16 * pow(A, 4) + 4 * pow(A, 2) * pow((X + A), 2)) - pow((X + A), 2) - pow(A, 2));
            } else {
                Y = sqrt(pow(A, 2) - pow((X + A), 2)) - 2 * A;
            }
            cout << X << Y << endl;
            X += dX;
        }
    }
};

int main(){
    setlocale(.1251, "Russian");
    solution sol;
    sol.viraz();

return 0;

}
