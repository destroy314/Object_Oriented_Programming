#include <iostream>
#include <vector>
using namespace std;

class StringVector : vector<void*> {
   public:
    void push_back(string* sp) { vector<void*>::push_back(sp); }
    string* operator[](int n) { return (string*)*(this->_M_impl._M_start + n); }
};

template <class T>
class PointerVector : vector<void*> {
   public:
    void push_back(T* tp) { vector<void*>::push_back(tp); }
    T* operator[](int n) { return (T*)*(this->_M_impl._M_start + n); }
};

int main() {
    StringVector sv;
    string s = "QWERTY";
    string* sp = &s;
    sv.push_back(sp);
    cout << *sv[0] << endl;

    PointerVector<char> cv;
    char c = 'x';
    char* cp = &c;
    cv.push_back(cp);
    cout << *cv[0] << endl;
    return 0;
}