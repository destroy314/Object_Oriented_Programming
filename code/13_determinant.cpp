#include <iostream>
using namespace std;

int determinant(int d[], int n) {
    if (n == 1) return d[0];
    if (n == 2) return d[0] * d[3] - d[1] * d[2];
    int* p = new int[(n - 1) * (n - 1)];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int l = 0;
        for (int line = 1; line < n; line++) {
            for (int row = 0; row < n; row++) {
                if (row != i) {
                    *(p + (l++)) = d[line * n + row];
                }
            }
        }
        ans += (i % 2 == 0 ? 1 : -1) * d[i] * determinant(p, n - 1);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int* a = new int[n * n];
    for (int i = 0; i < n * n; i++) {
        cin >> *(a + i);
    }
    cout << determinant(a, n) << endl;
    return 0;
}