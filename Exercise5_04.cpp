#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int sum=0, i, n;
	cout << "Input N:";
	cin >> n;
	
	for(int i=1; i<=n; i++){
		sum += (i*i);
	}
	
	cout << sum;
	return 0;
}
