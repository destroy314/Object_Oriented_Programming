#include <iostream>
using namespace std;

class Simple {
   public:
    Simple();
    Simple(int);
};

Simple::Simple() { cout << "default constructor called" << endl; }
Simple::Simple(int x) { cout << "constructor called with int " << x << endl; }

int main() {
    Simple list[2] = {1};
    return 0;
}