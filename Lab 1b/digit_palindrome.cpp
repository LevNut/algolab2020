#include <iostream>

using namespace std;

main() {
	int n;
	cin >> n;
	int ar[100];
	int d = 0;
	do {
		ar[d] = n%10;
		n /= 10;
		d++;
	} while (n > 0);
	for (int i=0; i<d/2; i++) {
		if (ar[i] != ar[d-1-i]) {
			cout << "no";
			return 0;
		}
	}
	cout << "yes";
}
