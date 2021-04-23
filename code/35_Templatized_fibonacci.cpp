#include <iostream>
#include <typeinfo>
using namespace std;

template <class T>
T fibonacci(int n) {
    const int sz = 100;
    if (n > sz) {
        cerr << "out of range\n";
        return 0;
    }
    static T f[sz];
    f[0] = f[1] = 1;
    int i;
    for (i = 0; i < sz; i++) {
        if (f[i] == 0) break;
    }
    while (i <= n) {
        f[i] = f[i - 1] + f[i - 2];
        i++;
    }
    return f[n];
}

int main() {
    cout << typeid(fibonacci<long>(10)).name() << endl;   // l
    cout << typeid(fibonacci<float>(10)).name() << endl;  // f
    cout << typeid(fibonacci<int>(10)).name() << endl;    // i
    return 0;
}