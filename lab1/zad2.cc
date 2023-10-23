#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed;
    cout << setprecision(4);

    float a, b, c;

    cout << "podaj a" << endl;
    cin >> a;

    cout << "podaj b" << endl;
    cin >> b;

    cout << "podaj c" << endl;
    cin >> c;

    if (a == 0)
    {

        if (b == 0 && c == 0)
        {
            cout << "Nieskończenie wiele rozwiązań (a=0, b=0, c=0)   :   x:R";
        }
        else if (b == 0 && c != 0)
        {
            cout << "Brak rozwiązań (a=0, b=0, c≠0)   :   x:{}";
        }

        else if (b != 0)
        {
            cout << "x0 = " << -1 * b / c;
        }
    }
    else
    {
        float delta = (b * b) - (4 * a * c);

        if (delta < 0)
        {
            cout << "Brak rozwiązań (a≠0, Δ<0)   :   x:{}";
        }
        else if (delta == 0)
        {
            cout << "x1 = x2 = " << -1 * b / (2 * a);
        }
        else if (delta > 0)
        {
            float squaredDelta = sqrt(delta);
            cout << "x1 = " << ((-1 * b) - squaredDelta) / (2 * a) << ", ";
            cout << "x2 = " << ((-1 * b) + squaredDelta) / (2 * a);
        }
    }

    return 0;
}