#include <iostream>
using namespace std;

class Count {
    int id;
    static int count;

   public:
    Count() : id(count++) { cout << "Object created: " << id << endl; }
    ~Count() { cout << "Object deleted: " << id << endl; }
};
int Count::count = 0;

int main() {
    Count* count = new Count[5];
    delete &count[3];
    return 0;
}