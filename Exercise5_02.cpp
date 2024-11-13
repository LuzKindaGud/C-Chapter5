#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;

    cout << "\nEnter number = ";
    cin >> number;

    int i = 2;
    int count = 0;
    while (i <= sqrt(number))
    {
        if (number % i == 0)
        {
            count++;
        }
        i++;
    }

    if (count == 0 && number > 1)
    {
        cout << "\n" << number << " is Prime";
    }
    else
    {
        cout << "\n" << number << " is Not Prime";
    }

    return 0;
}
