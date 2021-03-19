#include <iostream>
using namespace std;

class class_1 {
   public:
    int num1 = 1;

   private:
    int num2 = 2;

   protected:
    int num3 = 3;
};

int main() {
    class_1 c;
    cout << c.num1;
    cout << c.num2;
    // error: 'int class_1::num2' is private within this context
    cout << c.num3;
    // error: 'int class_1::num3' is protected within this context
    return 0;
}