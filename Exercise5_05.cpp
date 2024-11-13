#include <iostream>
#include <cmath>
using namespace std;

int main(){
	for (int i = 48; i <= 127; i++) {
        cout << "ASCII code: " << i << " - Character: " << static_cast<char>(i) << endl;
    }
	
	return 0;
}
