#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    float x, y;

    setlocale(LC_ALL, "Russian");
    cout << "введите x: ";
    cin >> x;
    cout << "введите y: ";
    cin >> y;
    if (x >= 0) {
        if (x <= 1) {
            if ((x - 1) <= y and y < 0) {
                cout << "Точка (x,y) принадлежит заштрихованной плоскости";
            }
            else { cout << "Точка (x,y) не принадлежит заштрихованной плоскости"; }
        }
        else { cout << "Точка (x,y) не принадлежит заштрихованной плоскости"; }
    }
    else { cout << "Точка (x,y) не принадлежит заштрихованной плоскости"; }

    return 0;
}