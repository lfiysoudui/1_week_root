#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double r = 0;
    double n = 0;
    double g = 0;
    cin >> n;
    g = n / 2;
    do
    {
        r = n / g;
        g = (g + r) / 2;
    } while (abs((n / r) - g) >= 0.01);
    cout << g << endl;
}