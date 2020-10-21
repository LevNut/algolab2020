#include <iostream>

using namespace std;

struct Ball {
    int color;
    int number;
    Ball *next;

    Ball(int color, int number, Ball *next = 0)
            : color(color), number(number), next(next) {}
};

void print_number(Ball *head) {
    auto *p = head;
    while (p != NULL) {
        cout << p->number << endl;
        p = p->next;
    }
}

void insert_end(Ball *head, int color, int number) {
    auto p = head;
    while (p->next != NULL)
        p = p->next;
    p->next = new Ball(color, number);
}

void insert_at_number(Ball *head, int color, int number, int target) {
    auto p = head;
    while (p->number != target)
        p = p->next;
    auto new_ball = new Ball(color, number, p->next);
    p->next = new_ball;
}

int main() {
    Ball *head = NULL;
    int n, m;
    int d, p;
    int x;
    int ball_count = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> x;
        ball_count++;
        if (head == NULL)
            head = new Ball(x, ball_count);
        else
            insert_end(head, x, ball_count);
    }
    for (int i = 0; i < m; i++) {
        cin >> d >> p;
        ball_count++;
        insert_at_number(head, d, ball_count, p);
    }
    print_number(head);
}