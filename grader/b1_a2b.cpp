#include <iostream>

using namespace std;

main(){
	int a;
	int b;
	cin >> a;
	cin >> b;
	int s = 0;
	for (int i=a; i<=b; i++){
		s += i;
	}
	cout << s;
}
