#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int val, ListNode *next = 0)
            : val(val), next(next) {}
};

ListNode *head = NULL;

void insert_front(int val) {
    ListNode *new_node = new ListNode(val, head);
    ListNode *p = head;
    if (head != NULL) {
        while (p->next != head)
            p = p->next;
        p->next = new_node;
    } else
        new_node->next = new_node;
    head = new_node;
}

void remove_val(ListNode *prev) {
    prev->next = head->next;
    free(head);
    head = prev;
}


void print_list() {
    ListNode *p = head;
    do {
        cout << p->val << " ";
        p = p->next;
    } while (p != head);
}

int main() {
    int n, k;
    cin >> n >> k;
    bool start = true;
    for (int i = n; i > 0; i--) {
        insert_front(i);
    }
    for (int i = 0; i < n - 1; i++) {
        ListNode *p = head;
        for (int j = 0; j < k; j++) {
            if (start) {
                start = !start;
            } else {
                p = head;
                head = head->next;
            }
        }
        remove_val(p);
    }
    cout << head->val;
    free(head);
}