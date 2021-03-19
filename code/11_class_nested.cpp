#include <iostream>
using namespace std;

class Hen {
   public:
    void display() { cout << "This is a Hen." << endl; }
    class Nest {
       public:
        void display() { cout << "This is a Nest." << endl; }
        class Egg {
           public:
            void display() { cout << "This is an Egg." << endl; }
        };
    };
};

int main() {
    Hen h;
    Hen::Nest n;
    Hen::Nest::Egg e;
    h.display();
    n.display();
    e.display();
    return 0;
}