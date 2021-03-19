#include <iostream>
using namespace std;

int fun(double x) { return (int)x; }
int (*p)(double) = fun;

int main() {
    cout << (*p)(1.1) << endl;
    return 0;
}