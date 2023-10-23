#include <iostream>
#include <cmath>
#include <iomanip>

constexpr float D = 3.05;
constexpr float E = 35.124;
constexpr float PI = 3.1415;
constexpr float EULER = 2.7182;

using namespace std;

void f(float x)
{
    if ((E * sin(2 * x + 2)) == 0)
    {
        cout << "Blad: dzielenie przez 0" << endl;
    }
    else
    {
        cout << "f(" << x << ")=";
        cout << (D * cos(2 * x - 3)) / (E * sin(2 * x + 2)) << endl;
    }
}

void g(float x)
{
    float expr = 2.5 - fabs(2.5 * x - 2.0);
    if (expr > 0)
    {
        cout << "g(" << x << ")=";
        cout << pow(expr, 1.0 / 6.0) << endl;
    }
    else
    {
        cout << "g(" << x << ")=";
        cout << pow(abs(expr), 1.0 / 6.0) * cos(PI / 6.0) << " + " << pow(abs(expr), 1.0 / 6.0) * sin(PI / 6.0) << "i" << endl;
    }
}

void h(float x)
{
    if (x == 1)
    {
        cout << "Blad: dzielenie przez 0" << endl;
    }
    else if (x <= 0)
    {
        cout << "Blad: liczba logarytmowana musi byc dodatnia" << endl;
    }
    else
    {
        cout << "h(" << x << ")=";
        cout << pow((8.7264 * x) + log(x), EULER / (x - 1)) << endl;
    }
}

int main()
{

    cout << fixed;
    cout << setprecision(2);

    float input;
    char functionChoice;

    cout << "Podaj wartosc x" << endl;
    cin >> input;

    cout << "Wybierz funkcję [a,b,c]" << endl;
    cin >> functionChoice;

    switch (functionChoice)
    {
    case 'a':
        f(input);
        break;
    case 'b':
        g(input);
        break;
    case 'c':
        h(input);
        break;
    default:
        f(input);
        break;
    }
    return 0;
}