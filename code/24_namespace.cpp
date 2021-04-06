#include <iostream>

#include "24_head2.hpp"
namespace N1 = Namespace_1;

int N1::add(int a, int b) { return a + b; }
void N1::output(int i) { std::cout << i << std::endl; }
int N1::multiple(int a, int b) { return a * b; }
void N1::output(char c) { std::cout << c << std::endl; }

void call1() {
    N1::output(N1::add(2, 3));
    return;
}
void call2() {
    using namespace N1;
    output(multiple(2, 3));
    return;
}

int main() {
    call1();
    call2();
    return 0;
}