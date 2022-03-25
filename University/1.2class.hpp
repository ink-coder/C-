#include <iostream>
#include <cmath>

using namespace std;

class solution {
public:
    int N;
    float A,B;
    float x;
    void viraz() {
        cin >> N >> A >> B;
        B = ((B - A) / (N - 1));
        x = A;
        for (int i = 0; i < N; i++){
            cout << x << "\t" << (pow(x, 3.f) / sqrt(3.f)) - (exp(x) * log(fabs(pow(1.37f, 3.f) + pow(x, 3)))) + 4.f / 3.f <<"\n";
            x += B;
        }
    }
};

int main()
{
    setlocale(.1251, "Russian");
    solution sol;
    sol.viraz();
    cout << sol.x << "";
return 0;
}
