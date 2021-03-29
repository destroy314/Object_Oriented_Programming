#include <iostream>
using namespace std;

class C {
    const float cf;
    float f;

   public:
    C() : cf(1.2), f(1.3) {}
    void output() {
        cout << cf << ' ' << f << endl;
        return;
    }
};

int main() {
    C test;
    test.output();
    return 0;
}