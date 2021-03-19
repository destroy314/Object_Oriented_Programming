#include "12_StackOfInt.h"
using namespace std;

const int SIZE = 50;

struct StackOfInt::StackImp {
    int topIndex = -1;
    int stack[SIZE];
};

StackOfInt::StackOfInt() { Imp = new StackImp; }

void StackOfInt::push(int i) {
    if (Imp->topIndex == SIZE - 1) return;
    Imp->stack[++Imp->topIndex] = i;
    return;
}

void StackOfInt::pop() {
    if (Imp->topIndex == -1) return;
    Imp->topIndex--;
    return;
}

int StackOfInt::top() {
    if (Imp->topIndex == -1) return 0;
    return Imp->stack[Imp->topIndex];
}