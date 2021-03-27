#include <iostream>
using namespace std;

class Simple {
   public:
    Simple();
    Simple(int);
    ~Simple();
};

Simple::Simple() { cout << "default constructor called" << endl; }
Simple::Simple(int x) { cout << "constructor called with int " << x << endl; }
Simple::~Simple() { cout << "destructor called" << endl; }

int main() {
    Simple list[2] = {1};
    delete &list[1];
    return 0;
}