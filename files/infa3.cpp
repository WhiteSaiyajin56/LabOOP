#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    float x, y;

    setlocale(LC_ALL, "Russian");
    cout << "������� x: ";
    cin >> x;
    cout << "������� y: ";
    cin >> y;
    if (x >= 0) {
        if (x <= 1) {
            if ((x - 1) <= y and y < 0) {
                cout << "����� (x,y) ����������� �������������� ���������";
            }
            else { cout << "����� (x,y) �� ����������� �������������� ���������"; }
        }
        else { cout << "����� (x,y) �� ����������� �������������� ���������"; }
    }
    else { cout << "����� (x,y) �� ����������� �������������� ���������"; }

    return 0;
}