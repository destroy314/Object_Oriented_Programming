#include <iostream>
using namespace std;

int change(const int a) {
    a++;  // error: increment of read-only parameter 'a'
    cout << a << endl;
    return 0;
}

int main() {
    int x = 5;
    change(x);
    cout << x << endl;
    return 0;
}