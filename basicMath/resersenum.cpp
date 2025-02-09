#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int revNum = 0;

	while(n > 0){
		int ld = n % 10;
		revNum = (revNum * 10) + ld;
		// Remove the last digit from 'n'.
		n = n / 10;
	}
	cout << revNum;
}