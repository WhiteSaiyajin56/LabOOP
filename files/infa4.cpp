#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    float x, y, z, su;

    setlocale(LC_ALL, "Russian");
    cout << "введите x: ";
    cin >> x;
    cout << "введите y: ";
    cin >> y;
    cout << "введите z: ";
    cin >> z;
    if (x >= y) {
        if (y >= z) {
            su = x * y;
        }
        else { su = x * z; }
    } else if (x >= z) {
        su = x * y;
    } else { su = y * z; }
    cout <<"Произведение 2-х наибольших чисел равна " << su;

    return 0;
}