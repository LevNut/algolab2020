#include <iostream>

using namespace std;

bool check_prime(int p) {
	if (p <= 1) {
		return false;
	}
	for (int i=2; i<p; i++) {
		if (p%i==0) {
			return false;
		}
	}
	return true;
}

int next_prime(int x) {
	x++;
	while (!check_prime(x)) {
		x++;
	}
	return x;
}

int main() {
	int x;
	cin >> x;

	cout << next_prime(x) << endl;
}
