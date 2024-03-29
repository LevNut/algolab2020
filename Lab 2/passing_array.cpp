#include <iostream>
using namespace std;

void find_max_min(int b[], int n,int* mx,int* mn)
{
	*mx = *mn = *b;
	for(int i=0; i<n; i++){
		if(*mx < b[i]){
			*mx = b[i];
		}
		if(*mn > b[i]){
			*mn = b[i];
		}
	}
}

main()
{
  int a[1000];
  int n;

  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> a[i];
  }

  int mx,mn;
  find_max_min(a,n,&mx,&mn);

  cout << "max = " << mx << endl;
  cout << "min = " << mn << endl;
}
