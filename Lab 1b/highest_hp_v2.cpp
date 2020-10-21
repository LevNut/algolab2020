#include <iostream>
using namespace std;

main()
{
  int n;
  cin >> n;
  int hp = 100;// initial HP
  int max_hp = hp;
  bool alive = true;
  for(int i=0; i<n; i++) {
    int a;
    cin >> a;
    if (alive){
    	hp += a;
    		if (hp<=0){
    			alive = false;
			}
	}
    
    if (max_hp<hp && alive){
    	max_hp = hp;
	}
  }
  cout << max_hp << endl;
}
