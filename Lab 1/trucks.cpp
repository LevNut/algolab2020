#include <iostream>

using namespace std;

int main() {
	int n;
	int t = 0;
	int tw = 0;
	int pw;
	cin >> n;
	int p[n];
	for (int i=0; i<n; i++){
		cin >> p[i];
		tw += p[i];
	}
	while (tw!=0){
		pw = 0;
		for (int i=0; i<n;i++){
			if (pw+p[i]<=1000){
				tw -= p[i];
				pw += p[i];
				p[i] = 0;
			}
		}
		t++;
	}
	cout << t;
}
