#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int exp;
	int total_exp=0;
	for(int i=0; i<n; i++){
		cin >> exp;
		if ((i+1)%4 == 0){
			total_exp += exp*2;
		}else{
			total_exp += exp;
			}
	}
	cout << total_exp;
}


