#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int* a = new int[N];
	int b;
	for (b = 1; b <= N; b++) {
		cin >> a[b];
	}
	int max = a[1], nmax = 1;
	for (b = 1; b <= N; b++) {
		if (a[b] > max) {
			max = a[b];
			nmax = b;
		}
	}
	for (b = 2; b <= nmax; b = b + 2) {
		a[b] = a[b] * max;
	}
	for (b = 1; b <= N; b++) {
		cout << a[b] << "  ";
	}
return 0;
}