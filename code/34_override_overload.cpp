#include <iostream>
using namespace std;

class Base {
   public:
    virtual void put(int i) { cout << "int " << i << endl; }
    virtual void put(double d) { cout << "double " << d << endl; }
    virtual void put(char c) { cout << "char " << c << endl; }
};

class New : public Base {
   public:
    void put(int i) { cout << "new int " << i << endl; }
};

class Neo : public Base {};

int main() {
    New n;
    n.put(2);    // new int 2
    n.put(2.5);  // new int 2
    n.put('s');  // new int 115
    cout << endl;
    Base* b = &n;
    b->put(3);    // new int 3
    b->put(3.5);  // double 3.5
    b->put('k');  // char k
    cout << endl;
    Neo nn;
    nn.put(4);    // int 4
    nn.put(4.5);  // double 4.5
    nn.put('o');  // char o
    return 0;
}