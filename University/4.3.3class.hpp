#include <iostream>

using namespace std;

class solution{
public:
    bool avg_calc(int N, int M[]) {
    int sum = 0;
    float avg;
    for (int i = 0; i < N; i++) {
        sum += M[i];
    }
    avg = static_cast<float>(sum) / N;
    if (avg > 4) return 1;
    else return 0;
    }

    bool no_dvoechniki(int N, int M[]) {
        for (int i = 0; i < N; i++) {
            if (M[i] <= 2) return 0;
        }
        return 1;
    }

    bool less_troechniki(int N, int M[]) {
        int counter = 0;
        for (int i = 0; i < N; i++) {
            if (M[i] == 3) counter++;
        }
        if (static_cast<float>(N-counter)/N > 0.5 ) return 1;
        return 0;
    }
    int N;

        void resh(){
            cout << "Введите количество студентов:" << endl;
            cin >> N;
        int M[N];
        for (int i = 0; i < N; i++) {
            cout << "Введите элемент М[" << i << "]:";
            cin >> M[i];
        }

        if (avg_calc(N, M) && no_dvoechniki(N, M) && less_troechniki(N, M))
            cout << "Группа попадает на конкурс." << endl;
        else cout << "Группа НЕ попадает на конкурс." << endl;
        //cout << avg_calc(N, M) << no_dvoechniki(N, M) << less_troechniki(N, M) << endl;
        }
};
    int main()
    {
        setlocale(.1251, "Russian");

        solution sol;

        sol.resh();

    return 0;
}
