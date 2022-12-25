#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int k = s.length();
	int n = 1;
	int j = 0;

	for (int i = 0; i < k; i++) {
		int a1 = s[i];
		int a2 = s[i+1];
		if (a1 <= a2) {
			n = n + 1;
		}
		else {
			if (j < n) {
				j = n;
			}
			n = 1;
		}
	}
	cout << j;
	return 0;
}