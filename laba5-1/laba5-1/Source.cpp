#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string str1;
    string str2;
    string str3;
    cin >> str1;
    cin >> str2;
    int z = 0;
    int k = str1.length(), l = str2.length();
    int j, b = 0;
    for (int i = 0; i < k; i++) {
        for (j = 0; j < l; j++) {
            if (str1[i] == str2[j]) {
                z = 1;
            }
        }
        if (z == 1) {
            str3 = str3.append(str1, i + b, 1);
            str3 = str3.append(str1, i + b, 1);
            z = 0;
        }
        else {
            str3 = str3.append(str1, i + b, 1);
        }
    }
    cout << str3;

    return 0;
}
