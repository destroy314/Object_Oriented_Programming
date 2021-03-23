#include <iostream>
#define pi 3.14
using namespace std;

class circle {
    float x, y, r;

   public:
    circle(float x_in, float y_in, float r_in) {
        x = x_in;
        y = y_in;
        r = r_in;
    }
    float area() { return 2 * pi * r; }
    float circumference() { return pi * r * r; }
};

int main() {
    float x, y, r;
    cin >> x >> y >> r;
    circle C(x, y, r);
    cout.precision(4);
    cout << fixed << C.circumference() << endl;
    cout << fixed << C.area() << endl;
    return 0;
}