#include <iostream>

using namespace std;

int main() {
	int s;
	cin >> s;
	if (s>=80 && s <=100){
		cout << "Excellent job.";
	}else if(s>=50){
		cout << "Okay.";
	}else{
		cout << "Please try harder.";
	}
}
