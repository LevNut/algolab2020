#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int n;
	int l;
	int x=0;
	cin >> n;
	cin >> l;
	int h[n];
	for (int i=0; i<n; i++){
		cin >> h[i];
	}
	for (int i=0; i<n-2; i++){
		for (int j=i+1; j<n-1; j++){
			if (abs(h[i]-h[j])<=l){
				x++;
			}
		}
	}
	cout << x;
}
