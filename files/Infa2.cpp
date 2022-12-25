#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d, x = 2;
    cin >> a;
    cin >> b;
    c = a - b;
    d = pow(c,x);
    cout << "(a - b)^2 = " << d;

    return 0;
}