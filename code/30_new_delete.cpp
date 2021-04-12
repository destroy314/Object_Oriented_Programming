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
    Count* count = new Count;
    delete count;
    int n;
    cin >> n;
    Count* heap_count = new Count[n];
    delete[] heap_count;
    return 0;
}