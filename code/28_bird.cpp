#include <iostream>
using namespace std;

class Bird {
    string str;
    static int i;

   public:
    Bird() {
        cout << "default constructor called" << endl;
        i++;
        str = "Bird #" + to_string(i);
    }
    Bird(const Bird &b) {
        cout << "copy constructor called" << endl;
        i++;
        str = b.str;
    }
    friend ostream &operator<<(ostream &, Bird &);
    Bird &operator=(const Bird &b) {
        if (this == &b) return *this;
        cout << "operator = called" << endl;
        i++;
        str = b.str;
        return *this;
    }
};
int Bird::i = 0;

ostream &operator<<(ostream &out, Bird &b) {
    out << b.str;
    return out;
}

int main() {
    Bird a;
    cout << a << endl;
    Bird b = a;
    cout << b << endl;
    Bird c;
    cout << c << endl;
    c = a;
    cout << c << endl;
    return 0;
}