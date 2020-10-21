#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n == 0 || n == 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    int t = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i) && (n % i == 0))
            t++;
    }
    cout << t;
}