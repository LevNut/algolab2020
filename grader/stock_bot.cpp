#include <iostream>

using namespace std;

int main() {
    int n, k = 0;
    cin >> n;
    cin >> k;
    int stock[n];
    int stock_bot = 0;
    bool hasStock = false;
    int last_stock;
    for (int i = 0; i < n; i++) {
        cin >> stock[i];
        if (i > 0) {
            if (stock[i] - stock[i - 1] >= k && !hasStock) {
                stock_bot -= stock[i];
                hasStock = true;
                last_stock = stock[i];
            } else if (stock[i - 1] - stock[i] >= k && hasStock) {
                stock_bot += stock[i];
                hasStock = false;
            }
        }
    }
    if (hasStock) {
        stock_bot += last_stock;
    }
    cout << stock_bot;
}