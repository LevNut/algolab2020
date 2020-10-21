#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int col[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char type = '-';
    int index = 0;
    for (int i = 0; i < n; i++) {
        cin >> type;
        cin >> index;
        if (type == '-') {
            int height = 0;
            for (int j = index - 1; j < index + 3; j++) {
                if (height < col[j]) {
                    height = col[j];
                }
            }
            for (int j = index - 1; j < index + 3; j++) {
                col[j] = height + 1;
            }
        } else if (type == 'i') {
            col[index - 1] += 4;
        } else if (type == 'o') {
            int height = 0;
            for (int j = index - 1; j < index + 1; j++) {
                if (height < col[j]) {
                    height = col[j];
                }
            }
            for (int j = index - 1; j < index + 1; j++) {
                col[j] = height + 2;
            }
        }
    }
    int total_height = 0;
    for (int i : col) {
        if (total_height < i) {
            total_height = i;
        }
    }
    cout << total_height;
}