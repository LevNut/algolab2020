#include <iostream>

using namespace std;

int k, n, m, x, y;

int main() {
    while (true) {
        cin >> k;
        if (k == 0)
            break;
        cin >> n;
        cin >> m;
        for (int i = 0; i < k; i++) {
            cin >> x;
            cin >> y;
            if (x == n || y == m) {
                cout << "divisa" << endl;
            } else if (x > n && y > m) {
                cout << "NE" << endl;
            } else if (x > n && y < m) {
                cout << "SE" << endl; //this line is wrong
            } else if (x < n && y > m) {
                cout << "NO" << endl; //this line is wrong
            } else if (x < n && y < m) {
                cout << "SO" << endl;
            }
        }
    }
}