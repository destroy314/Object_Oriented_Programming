#include <iostream>
using namespace std;

class Number {
    double val;

   public:
    Number(double x = 0) : val(x) {}
    const Number operator+(const Number& r) const {
        return Number(val + r.val);
    }
    const Number operator-(const Number& r) const {
        return Number(val - r.val);
    }
    const Number operator*(const Number& r) const {
        return Number(val * r.val);
    }
    const Number operator/(const Number& r) const {
        if (r.val == 0) return Number(1e308);
        return Number(val / r.val);
    }
    const Number operator=(const Number& r) {
        if (this == &r) return *this;
        val = r.val;
        return *this;
    }
    operator int() const { return (int)val; }
};

int main() {
    Number a(0.2), b(5.5), c(-3);
    cout << 1 + a * b - c << endl;
    return 0;
}