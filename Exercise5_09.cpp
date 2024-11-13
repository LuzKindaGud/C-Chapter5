#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    
    cout << "Input N: ";
    cin >> n;
    
    cout << "Input M: ";
    cin >> m;
    
    for (int i = n; i >= m; i--) {
        int temp = 0;
        int originalNum = i;
        
        // Convert the number to a string and get its length
        string numStr = to_string(i);
        int numLength = numStr.length();
        
        // Calculate the sum of cubes of digits
        for (int j = 0; j < numLength; j++) {
            int digit = i % 10;
            temp += pow(digit, 3);
            i /= 10;
        }
        
        // Check if the sum of cubes of digits is equal to the original number
        if (temp == originalNum) {
            cout << originalNum << " ";
        }
        
        // Restore the original value of i
        i = originalNum;
    }
    
    cout << endl;
    return 0;
}
