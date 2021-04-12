#include <cstring>
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

inline void require(bool requirement, const char* msg = "Requirement failed") {
    // Local "using namespace std" for old compilers:
    using namespace std;
    if (!requirement) {
        fputs(msg, stderr);
        fputs("\n", stderr);
        exit(EXIT_FAILURE);
    }
}

class PStash {
    int quantity;
    int next;
    void** storage;
    void inflate(int increase);

   public:
    PStash() : quantity(0), storage(0), next(0) {}
    ~PStash();
    int add(void* element);
    void* operator[](int index) const;
    void* remove(int index);
    int count() const { return next; }
};
int PStash::add(void* element) {
    const int inflateSize = 10;
    if (next >= quantity) inflate(inflateSize);
    storage[next++] = element;
    return (next - 1);
}
PStash::~PStash() {
    for (int i = 0; i < next; i++) {
        require(storage[i] == 0, "PStash not cleaned up");
    }
    delete[] storage;
}
void PStash::inflate(int increase) {
    const int psz = sizeof(void*);
    void** st = new void*[quantity + increase];
    memset(st, 0, (quantity + increase) * psz);
    memcpy(st, storage, quantity * psz);
    quantity += increase;
    delete[] storage;
    storage = st;
}

int main() {
    PStash countStash;
    for (int i = 0; i < 5; i++) {
        countStash.add(new Count);
    }
    return 0;
}

// It looks like Count's destructor is not being called