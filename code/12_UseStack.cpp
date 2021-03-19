#include <iostream>

#include "12_StackOfInt.h"
using namespace std;

int main() {
    StackOfInt S = StackOfInt();
    S.push(1);
    S.push(2);
    cout << S.top() << endl;
    S.pop();
    cout << S.top() << endl;
    return 0;
}