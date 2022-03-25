#include <iostream>
#include <cmath>

using namespace std;

class solution{
public:
    float X, mult = 1;
    int n;
    void viraz(){
        cin >> X >> n;
        for (int k = 1; k <= n; k++) {
            mult *= log(pow(X, k - 1) + sqrt(exp(k + X))) / (0.5 * k + fabs(X));
            }

            mult += tan(sin(X));
        }

};

int main()
{
    setlocale(.1251, "Russian");
    solution sol;
    sol.viraz();
    cout << sol.mult << "";
return 0;
}
