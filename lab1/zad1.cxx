#include <iostream>
#include <cmath>
#include <iomanip>

constexpr float D = 3.05;
constexpr float E = 35.124;
constexpr float PI = 3.1415;
constexpr float EULER = 2.7182;

void f(float x)
{
    if ((E * sin(2 * x + 2)) == 0)
    {
        std::cout << "Blad: dzielenie przez 0" << std::endl;
    }
    else
    {
        std::cout << "f(" << x << ")=";
        std::cout << (D * cos(2 * x - 3)) / (E * sin(2 * x + 2)) << std::endl;
    }
}

void g(float x)
{
    float expr = 2.5 - fabs(2.5 * x - 2.0);
    if (expr > 0)
    {
        std::cout << "g(" << x << ")=";
        std::cout << pow(expr, 1.0 / 6.0) << std::endl;
    }
    else
    {
        std::cout << "g(" << x << ")=";
        std::cout << pow(abs(expr), 1.0 / 6.0) * cos(PI / 6.0) << " + " << pow(abs(expr), 1.0 / 6.0) * sin(PI / 6.0) << "i" << std::endl;
    }
}

void h(float x)
{
    if (x == 1)
    {
        std::cout << "Blad: dzielenie przez 0" << std::endl;
    }
    else if (x <= 0)
    {
        std::cout << "Blad: liczba logarytmowana musi byc dodatnia" << std::endl;
    }
    else
    {
        std::cout << "h(" << x << ")=";
        std::cout << pow((8.7264 * x) + log(x), EULER / (x - 1)) << std::endl;
    }
}

int main()
{

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    float input;
    char functionChoice;

    std::cout << "Podaj wartosc x" << std::endl;
    std::cin >> input;

    std::cout << "Wybierz funkcję [a,b,c]" << std::endl;
    std::cin >> functionChoice;

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
}