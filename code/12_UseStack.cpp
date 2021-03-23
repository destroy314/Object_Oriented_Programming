#include <iostream>

#include "12_StackOfInt.h"
using namespace std;

int main() {
    StackOfInt S;
    S.push(1);
    S.push(2);
    cout << S.top() << endl;
    S.pop();
    cout << S.top() << endl;
    return 0;
}

// g++ 12_StackImp_1.cpp 12_UseStack.cpp