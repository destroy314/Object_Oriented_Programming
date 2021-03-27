#include <iostream>
using namespace std;

class out {
   public:
    void print(int, int, int, int);
};

void out::print(int a = 1, int b = 1, int c = 1, int d = 1) {
    cout << a << b << c << d << endl;
    return;
}

int main() {
    out o1;
    o1.print();
    o1.print(2, 4);
    return 0;
}

// it will not change main()