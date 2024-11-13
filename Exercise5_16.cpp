#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "The odd digits are: ";
    bool hasOddDigits = false;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            cout << digit << " ";
            hasOddDigits = true;
        }
        n /= 10;
    }

    if (!hasOddDigits) {
        cout << "N" << endl;
    } else {
        cout << endl;
    }

    return 0;
}
