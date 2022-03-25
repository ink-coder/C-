#include <iostream>
#include <cmath>

using namespace std;

class solution{
    public:
        int N = 0, B; //количество точек
        int count = 0;
        float XT, YT, dist;
        float sumX = 0, sumY = 0, midX, midY;

            void resh(){
                cout << "Введите XT и YT:" << endl;
                cin >> XT;
                cin >> YT;
                cout << "Введите порог B:" << endl;
                cin >> B;
                cout << "Введите количество точек:" << endl;
                cin >> N;
                float X[N];
                float Y[N];

                for (int i = 0; i < N; i++){
                    cout << "Введите пару X и Y:\n";
                    cin >> X[i];
                    cin >> Y[i];
                    dist = sqrt(pow(X[i] - XT, 2) + pow(Y[i] - YT, 2)); //Рассчёт расстояния от введеной точки по XT,YT

                    if (B < dist) {
                        count++;
                    }

                    sumX += X[i];
                    sumY += Y[i];
                }
                midX = sumX/N;
                midY = sumY/N;
                cout << "Количество точек, находящихся от XT, YT далее, чем B:" << count << endl;
                cout << "Средние значения X и Y равны соответственно:" << midX << " ; " << midY << endl;
            }
};

int main()
{
    setlocale(.1251, "Russian");
    solution sol;
    sol.resh();
return 0;
}
