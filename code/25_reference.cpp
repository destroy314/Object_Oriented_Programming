#include <iostream>
using namespace std;

void change(char& c) { c = 'x'; }

int main() {
    char c = 'a';
    cout << c << endl;
    change(c);
    cout << c << endl;
    return 0;
}

// Reduced use of pointers makes program logic clearer.