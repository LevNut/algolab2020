#include <iostream>

using namespace std;

int n = 0;
int water = 0;
int ind = 0;
int total = 0;
int bucket[] = {0, 0, 0, 0, 0};

int find(const int lst[]) {
    int min_value = 1000;
    int min_index = 0;
    for (int i = 0; i < 5; i++) {
        if (lst[i] < min_value) {
            min_value = lst[i];
            min_index = i;
        }
    }
    return min_index;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> water;
        ind = find(bucket);
        bucket[ind] += water;
        if (bucket[ind] >= 1000) {
            total += 1000;
            bucket[ind] = 0;
        }
    }
    cout << total;
}