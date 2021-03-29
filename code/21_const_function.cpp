#include <iostream>
using namespace std;

class C {
   public:
    void cf() const;
    void f();
};
void C::cf() const { cout << "cf" << endl; }
void C::f() { cout << "f" << endl; }

int main() {
    const C ct;
    C t;
    ct.cf();
    ct.f();
    // error: passing 'const C' as 'this' argument discards qualifiers
    t.cf();
    t.f();
    return 0;
}