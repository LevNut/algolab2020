#include <iostream>

using namespace std;

typedef int ValueT;

struct ListNode {
    ValueT val;
    ListNode *next;

    ListNode(ValueT val, ListNode *next = 0)
            : val(val), next(next) {}
};

ListNode *front;
ListNode *rear;

void init_queue() {
    front = rear = 0;
}

void insert_queue(ValueT v) {
    ListNode *new_node = new ListNode(v);
    if () {

    } else {
        front = rear = new_node;
    }
}

ValueT extract_queue() {
    if (front != 0) {
        ValueT v = front->val;
        ListNode *new_front = front->next;
        delete front;
        front = new_front;
        if (front == 0) {
            rear = 0;
        }
        return v;
    } else {
        throw "Error extract from empty queue";
    }
}

void is_empty() {

}

int main() {

}