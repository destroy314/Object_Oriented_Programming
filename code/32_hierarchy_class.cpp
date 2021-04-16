#include <iostream>
using namespace std;

class level_1 {
   public:
    level_1() { cout << "level_1 constructed" << endl; }
    ~level_1() { cout << "level_1 destructed" << endl; }
};

class level_2 : level_1 {
   public:
    level_2() { cout << "level_2 constructed" << endl; }
    ~level_2() { cout << "level_2 destructed" << endl; }
};

class level_3 : level_2 {
   public:
    level_3() { cout << "level_3 constructed" << endl; }
    ~level_3() { cout << "level_3 destructed" << endl; }
};

int main() {
    level_3* L = new level_3;
    delete L;
    return 0;
}

/*
level_1 constructed
level_2 constructed
level_3 constructed
level_3 destructed
level_2 destructed
level_1 destructed
*/