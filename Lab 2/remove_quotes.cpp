#include <iostream>

using namespace std;

void remove_quotes(char *src, char *dest) {
    char *s = src;
    char *d = dest;
    while (*s != '\0') {
        if (*s == '\"' || *s == '\'') {
            s++;
        } else {
            *d = *s;
            d++;
            s++;
        }
    }
}

int main() {
    char st[1000];
    char out[1000];
    int l;

    cin.getline(st, 1000);
    remove_quotes(st, out);

    cout << out << endl;
}
