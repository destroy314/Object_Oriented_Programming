#include <iostream>

#include "4_1_head.h"

using namespace std;
void fun1(int x) {
    cout << "name: fun1" << endl;
    cout << "argument(s): int x" << endl;
    cout << "ruturn type: void" << endl;
    return;
}
char fun2(char c) {
    cout << "name: fun2" << endl;
    cout << "argument(s): char c" << endl;
    cout << "ruturn type: char" << endl;
    return c;
}
int fun3(int a, int b) {
    cout << "name: fun3" << endl;
    cout << "argument(s): int a, int b" << endl;
    cout << "ruturn type: int" << endl;
    return a + b;
}
float fun4(int y) {
    cout << "name: fun4" << endl;
    cout << "argument(s): int y" << endl;
    cout << "ruturn type: float" << endl;
    return (float)y / 2;
}