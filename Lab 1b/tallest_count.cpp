#include <iostream>
using namespace std;

main()
{
  int height[1000];
  int n;
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> height[i];
  }

  int max_height = height[0];
  int max_count = 0;
  for (int i=0; i<n; i++) {
  	if (max_height < height[i]){
  		max_height = height[i];
  		max_count = 1;
	}else if (max_height == height[i]){
		max_count++;
	}
  }
  cout << max_count << endl;
}
