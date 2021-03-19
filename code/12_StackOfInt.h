#ifndef STACKOFINT_H
#define STACKOFINT_H

class StackOfInt {
    class StackImp;
    StackImp* Imp;

   public:
    StackOfInt();
    void push(int i);
    void pop();
    int top();
};

#endif