#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    for (int i = 0; i < n; i++) {
        cout << abs((t[i] * 567 / 9 + 7492) * 235 / 47 - 498)/10%10 << endl;
    }
}