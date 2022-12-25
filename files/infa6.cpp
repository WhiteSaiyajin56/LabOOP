#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    int i, x;
    int n, j;
    double t;
    int z = 0;
    cin >> n;
    cin >> t;
    j = n;
    x = t * t + 0.5;
    cout << x;
    int* a = new int[n];
    for (i = 0; i < n; i++) {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        z = z + a[i] * pow(x, j);
        j = j - 1;
    }
    cout << z;
    return 0;
}