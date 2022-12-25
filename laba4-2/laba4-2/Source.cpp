#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const int N = 4;
	int a[N][N], b, c;
	for (b = 0; b < N; b++) {
		for (c = 0; c < N; c++) {
			cin >> a[b][c];
		}
	}
	int max = 0;
	int min = 1000;
	int stroka = 0;
	int stolb = 0;
	for (b = 0; b < N; b++) {
		for (c = 0; c < N; c++) {
			if (a[b][c] > max) {
				max = a[b][c];
				stroka = b;
			}
		}
	}
	for (b = 0; b < N; b++) {
		for (c = 0; c < N; c++) {
			if (a[b][c] < min) {
				min = a[b][c];
				stolb = c;
			}
		}
	}
	int z = 0;
	for (int i = 0; i < N; i++) {
		z = z + a[stroka][i] * a[i][stolb];
	}
	cout << z << endl;
	return 0;
}