#include <iostream>
using namespace std;
struct struct_1 {
    int num;
    void change(int target) {
        num = target;
        return;
    }
    void display() {
        cout << num;
        return;
    }
} S;

int main() {
    S.change(5);
    S.display();
    return 0;
}