#include <iostream>

using namespace std;

int main() {
    char line[1024];
    int count = 0;
    cin.get(line, 1024, '\0');
    char *p = line;
    while (*p != '\0') {
        if (*p == '"') {
            count++;
            if (count % 2)
                cout << "``";
            else
                cout << "''";
        } else
            cout << *p;
        p++;
    }
    cout << '\0';
}