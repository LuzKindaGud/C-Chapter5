#include <iostream>
#include <string>

using namespace std;

string getEnglishDigit(int digit) {
    switch (digit) {
        case 0: return ""; 
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        default: return "";
    }
}

int main() {
    int number;
    cout << "Enter any number: ";
    cin >> number;

    cout << "The digits in English are: ";

    while (number > 0) {
        int digit = number % 10;
        cout << getEnglishDigit(digit) << " ";
        number /= 10;
    }
    cout << endl;

    return 0;
}
