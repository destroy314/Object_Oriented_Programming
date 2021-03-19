#include <vector>

#include "12_StackOfInt.h"
using namespace std;

struct StackOfInt::StackImp {
    vector<int> stack;
};

StackOfInt::StackOfInt() { Imp = new StackImp; }

void StackOfInt::push(int i) {
    Imp->stack.push_back(i);
    return;
}

void StackOfInt::pop() {
    if (Imp->stack.empty()) return;
    Imp->stack.pop_back();
    return;
}

int StackOfInt::top() {
    if (Imp->stack.empty()) return 0;
    return Imp->stack[Imp->stack.size() - 1];
}