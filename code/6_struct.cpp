#include <iostream>
using namespace std;
struct struct_1 {
    int num;
} S;

void change(struct struct_1* p, int target) {
    (*p).num = target;
    return;
}

void display(struct struct_1* p) {
    cout << (*p).num;
    return;
}
int main() {
    change(&S, 5);
    display(&S);
    return 0;
}