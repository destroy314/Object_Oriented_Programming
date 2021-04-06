#include <iostream>
using namespace std;

class C {
   public:
    void printA() {
        printB();
        cout << "A" << endl;
        return;
    }
    void printB() {
        cout << "B" << endl;
        return;
    }
};

int main() {
    C c;
    c.printA();
    return 0;
}