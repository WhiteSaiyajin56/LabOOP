#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    int i, z;
    int n, num;
    cin >> n;
    int* k = new int[n];
    for (i = 0; i < n; i++) {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> k[i];
    }

    for (i = 0; i < n; i++) {
        num = k[i] % 2;
        if (num == 0) {
            num = (k[i] / 2) % 2;
            if (num == 1) {
                cout << k[i] << " ";
            }
        }
    }
    return 0;
}