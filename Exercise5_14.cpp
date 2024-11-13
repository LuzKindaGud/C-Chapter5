#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int num) {
    int originalNum = num, sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }
    return sum == originalNum;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int choice, number;

    while (true) {
        cout << "MENU\n";
        cout << "1. Armstrong\n";
        cout << "2. Prime\n";
        cout << "3. Finish\n";
        cout << "Choose (1,2,3) : ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a number: ";
                cin >> number;
                if (isArmstrong(number)) {
                    cout << "The number is an Armstrong number.\n";
                } else {
                    cout << "The number is not an Armstrong number.\n";
                }
                break;
            case 2:
                cout << "Enter a number: ";
                cin >> number;
                if (isPrime(number)) {
                    cout << "The number is a prime number.\n";
                } else {
                    cout << "The number is not a prime number.\n";
                }
                break;
            case 3:
                cout << "Do you want to finish (c/k)? ";
                char response;
                cin >> response;
                if (response == 'c') {
                    return 0;
                } else if (response == 'k') {
                    continue;
                }
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }
}
