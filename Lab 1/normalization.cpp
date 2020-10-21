#include <iostream>

using namespace std;

int gcd(int a,int b){
	int t;
	while (b != 0){
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

int main(){
	int a;
	int b;
	cin >> a;
	cin >> b;
	int g = gcd(a, b);
	a = a/g;
	b = b/g;
	cout << a;
	cout << "/";
	cout << b;
}
