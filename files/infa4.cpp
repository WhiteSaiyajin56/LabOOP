#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    float x, y, z, su;

    setlocale(LC_ALL, "Russian");
    cout << "������� x: ";
    cin >> x;
    cout << "������� y: ";
    cin >> y;
    cout << "������� z: ";
    cin >> z;
    if (x >= y) {
        if (y >= z) {
            su = x * y;
        }
        else { su = x * z; }
    } else if (x >= z) {
        su = x * y;
    } else { su = y * z; }
    cout <<"������������ 2-� ���������� ����� ����� " << su;

    return 0;
}