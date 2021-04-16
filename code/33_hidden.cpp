#include <iostream>
using namespace std;

class box {
   protected:
    static int totalNumber;

   public:
    box() { totalNumber++; }
    ~box() { totalNumber--; }
    static void printTotal() { cout << totalNumber << endl; }
    static void printTotal(string s) { cout << s << totalNumber << endl; }
};
int box::totalNumber = 0;

class paintedBox : public box {
   public:
    static void printTotal() { cout << totalNumber << endl; }
};

int main() {
    paintedBox* b = new paintedBox[2];
    b[1].printTotal();
    // 2
    b[1].printTotal("Total box number: ");
    // error: no matching function for call to 'paintedBox::printTotal(const
    // char [19])'
    return 0;
}