#include <iostream>
using namespace std;

class C {
   public:
    void put_1() const { cout << 'x' << endl; }
    void put_2() { cout << 'y' << endl; }
};

void by_val(C c) {
    c.put_1();
    c.put_2();
}
void by_ref(C& c) {
    c.put_1();
    c.put_2();
}
void by_cre(const C& c) {
    c.put_1();
    c.put_2();
    // error: passing 'const C' as 'this' argument discards qualifiers
}

int main() {
    C c;
    by_val(c);
    by_ref(c);
    by_cre(c);
    return 0;
}