#include <iostream>

using namespace std;

main() {
	int n;
	cin >> n;
	int s[n];
	int taller;
	for (int i=0; i<n; i++){
		cin >> s[i];
	}
	for (int i=0; i<n; i++){
		taller = 0;
		for (int j=0; j<n; j++) {
			if (j!=i) {
				if (s[i] < s[j]){
					taller++;
				}
			}
		}
		cout << taller << endl;
	}
}
