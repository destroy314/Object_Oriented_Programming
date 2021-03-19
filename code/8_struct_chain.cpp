#include <iostream>
using namespace std;

typedef struct node {
    int index;
    struct node* next;
} NODE;

void creat(NODE* first, int length) {
    NODE* p = first;
    for (int i = 0; i < length - 1; i++) {
        p->index = i + 1;
        NODE* q = new NODE;
        p->next = q;
        p = q;
    }
    p->index = 0;
    p->next = NULL;
    return;
}

void show(NODE* first) {
    NODE* p = first;
    while (1) {
        cout << "pointer value: " << p->next << endl;
        cout << "int value: " << p->index << endl << endl;
        if (p->index == 0) break;
        p = p->next;
    }
    return;
}

int main() {
    NODE* first = new NODE;
    creat(first, 5);
    show(first);
    return 0;
}