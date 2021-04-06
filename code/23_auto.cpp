#include <windows.h>

#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    auto i = 5;
    auto j = 3.3;
    cout << "type of 5: " << typeid(i).name() << endl;
    cout << "type of 3.3: " << typeid(j).name() << endl;

    register int m = 1;
    int n = 1;
    LARGE_INTEGER t1, t2, tc;
    QueryPerformanceFrequency(&tc);
    QueryPerformanceCounter(&t1);
    for (; m != 0; m++) {
    }
    QueryPerformanceCounter(&t2);
    double time = (double)(t2.QuadPart - t1.QuadPart) / (double)tc.QuadPart;
    cout << "register time = " << time << endl;

    QueryPerformanceCounter(&t1);
    for (; n != 0; n++) {
    }
    QueryPerformanceCounter(&t2);
    time = (double)(t2.QuadPart - t1.QuadPart) / (double)tc.QuadPart;
    cout << "time = " << time << endl;
    return 0;
}