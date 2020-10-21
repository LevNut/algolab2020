#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int b[n*15];
    int *a = b;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k <= j; k++) {
                cin >> *a;
                a++;
            }
        }
    }
}