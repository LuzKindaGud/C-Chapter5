#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, n, i,power;

    // Reading base & exponent
    cout << "Enter number: ";
    cin >> a;
    cout << "Enter exponent: ";
    cin >> n;

    // Calculating power of given number
    power = 1;
    i = 1;
    do
    {
        power = power * a;
        i++;
    } while (i <= n);

    cout << "\n" << a << " raised to the power of " << n << " is: " << power;
    return 0;
}
