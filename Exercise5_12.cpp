#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int f0 = 0, f1 = 1;
    cout << "Fibonacci sequence up to " << n << ":\n";
    cout << f0 << " ";
    for (int i = 1; i <= n; i++) {
        int fn = f0 + f1;
        cout << fn << " ";
        f0 = f1;
        f1 = fn;
    }
    cout << endl;

    return 0;
}
