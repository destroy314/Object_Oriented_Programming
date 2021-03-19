#include <iostream>
using namespace std;

typedef struct node {
    int index;
    struct node* next;
    void creat(int length);
    void show();
} NODE;

void node::creat(int length) {
    if (index == length) {
        index = 0;
        next = NULL;
        return;
    }
    node* q = new node;
    q->index = index + 1;
    next = q;
    q->creat(length);
    return;
}

void node::show() {
    cout << "pointer value: " << next << endl;
    cout << "int value: " << index << endl << endl;
    if (index == 0) return;
    next->show();
    return;
}

int main() {
    NODE* first = new NODE;
    first->index = 1;
    first->creat(5);
    first->show();
    return 0;
}