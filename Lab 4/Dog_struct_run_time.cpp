#include <iostream>
#include <iomanip>
using namespace std;

struct Dog {
  int age;
  double weight;
  double speed;
};

bool heavier(Dog d1, Dog d2) {
	return d1.weight>d2.weight;
}

double run_time(Dog d, double distance) {
  	return distance/d.speed;
}

void double_speed(Dog* d) {
  	d->speed *= 2;
}

Dog read_dog()
{
  Dog d;
  cin >> d.age >> d.weight >> d.speed;
  return d;
}

main()
{
  Dog dang = read_dog();
  double distance;
  cin >> distance;
  cout << fixed << setprecision(5) << run_time(dang, distance) << endl;
  double_speed(&dang);
  cout << run_time(dang, distance) << endl;
}
