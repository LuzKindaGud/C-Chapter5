#include <iostream>
using namespace std;

int main()
{
    int i, n, sum;

    cout << "Enter number: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "\nThe sum from 1 to n is: " << sum << endl;
    return 0;
}
