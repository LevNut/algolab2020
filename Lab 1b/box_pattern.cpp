#include <iostream>

using namespace std;

main() {
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++) {
		a[i] = i+1;
	}
	for (int i=0; i<n; i++) {
		for (int j=i; j<i+n; j++) {
			cout << a[j%n];
		}
		cout << endl;
	}
}

