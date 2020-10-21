#include <iostream>
using namespace std;

main() {
	int* x = new int[100];
	for(int i=0;i<100;i++){
		x[i] = i*2;
	}
	cout << x[1] + x[20] + x[99] << endl;

}
