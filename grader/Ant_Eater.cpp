#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a;
    int total = 0;
    bool full = false;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (!full) {
            if (a >= 1000) {
                full = true;
                total += 1000;
            } else {
                total += a;
            }
        } else {
            full = false;
        }
    }
    cout << total;
}
