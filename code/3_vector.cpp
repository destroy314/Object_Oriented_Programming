#include <stdlib.h>

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> vec;
    int length = 25;
    for (int i = 0; i < length; i++) {
        vec.push_back(rand() / double(RAND_MAX) * 100);
    }
    cout << "vec = [";
    for (int i = 0; i < length; i++) {
        cout << vec[i] << ",";
    }
    cout << "]" << endl;
    return 0;
}
