#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp = 0, originalNum;
    
    cout << "Input N: ";
    cin >> n;
    
    originalNum = n;
    
    // Calculate the sum of cubes of digits
    while (n > 0) {
        int digit = n % 10;
        temp = temp * 10 + digit;
        n /= 10;
    }
    
    // Check if the original number is equal to the reversed number
    if (temp == originalNum) {
        cout << originalNum << " is a palindrome number." << endl;
    } else {
        cout << originalNum << " is not a palindrome number." << endl;
    }
    
    return 0;
}
