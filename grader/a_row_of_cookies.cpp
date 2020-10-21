#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int val, ListNode *next = 0)
            : val(val), next(next) {}
};

ListNode *head = NULL;

int node_size() {
    int count = 0;
    ListNode *p = head;
    while (p != NULL) {
        count++;
        p = p->next;
    }
    return count;
}

void insert_front(int val) {
    ListNode *new_node = new ListNode(val);
    if (head == NULL) {
        head = new_node;
    } else {
        new_node->next = head;
        head = new_node;
    }
}

void insert_end(int val) {
    ListNode *new_node = new ListNode(val);
    ListNode *last = head;
    if (head == NULL) {
        head = new_node;
    } else {
        while (last->next != NULL)
            last = last->next;
        last->next = new_node;
    }
}

void insert_index(int index, int val) {
    if (index == 0) {
        insert_front(val);
    } else if (index > node_size() - 1) {
        insert_end(val);
    } else {
        ListNode *p = head;
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        ListNode *new_node = new ListNode(val, p->next);
        p->next = new_node;
    }
}

void remove_index(int index) {
    if (head != NULL) {
        if (index == 0) {
            ListNode *new_head = head->next;
            free(head);
            head = new_head;
        } else if (index == node_size() - 1) {
            ListNode *last = head;
            ListNode *prev;
            while (last->next != NULL) {
                prev = last;
                last = last->next;
            }
            prev->next = 0;
            free(last);
        } else if (index < node_size() - 1) {
            ListNode *p = head;
            for (int i = 0; i < index - 1; i++)
                p = p->next;
            ListNode *node = p->next;
            p->next = node->next;
            free(node);
        }
    }
}

void print_list() {
    ListNode *p = head;
    while (p != NULL) {
        cout << p->val << endl;
        p = p->next;
    }
}

int main() {
    int n, l, k, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> l;
        cin >> k;
        if (l == 1) {
            cin >> x;
            insert_index(k, x);
        } else if (l == 2) {
            remove_index(k - 1);
        }
    }
    print_list();
}