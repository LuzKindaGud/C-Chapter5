#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Nh?p m?t s? nguyên duong: ";
    cin >> n;

    int uocSoLeLonNhat = 0;
    for (int i = 1; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            uocSoLeLonNhat = i;
        }
    }

    if (uocSoLeLonNhat != 0) {
        cout << "U?c s? l? l?n nh?t c?a " << n << " là " << uocSoLeLonNhat << "." << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
