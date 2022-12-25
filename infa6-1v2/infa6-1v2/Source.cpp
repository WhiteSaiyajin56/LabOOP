#include <iostream>
using namespace std;
void da(int m)
	{
		setlocale(LC_ALL, "RUS");
		const int S = 3;
		int a, b;
		float c[S][S];
		cout << "Ёлементы матрицы 1:";
		for (a = 0; a < S; a++) {
			for (b = 0; b < S; b++) {
				cin >> c[a][b];
			}
		}
		int d, e;
		float f[S][S];
		cout << "Ёлементы матрицы 2:";
		for (d = 0; d < S; d++) {
			for (e = 0; e < S; e++) {
				cin >> f[d][e];
			}
		}
		int g, h;
		float i[S][S];
		cout << "Ёлементы матрицы 3:";
		for (g = 0; g < S; g++) {
			for (h = 0; h < S; h++) {
				cin >> i[g][h];
			}
		}
		int m1 = 0, m2 = 0, m3 = 0;
		for (a = 0; a < S; a++) {
			for (b = 0; b < S; b++) {
				m1 = m1 + c[a][b];
			}
		}
		for (d = 0; d < S; d++) {
			for (e = 0; e < S; e++) {
				m1 = m1 + f[d][e];
			}
		}
		for (g = 0; g < S; g++) {
			for (h = 0; h < S; h++) {
				m1 = m1 + i[g][h];
			}
		}
		if (m1 >= m2)
		{
			if (m1 > m3)
			{
				for (a = 0; a < S; a++) {
					for (b = 0; b < S; b++) {
						cout << c[a][b] << "\t";
					}
					cout << endl;
				}
			}
			else
			{
				for (g = 0; g < S; g++) {
					for (h = 0; h < S; h++) {
						cout << i[g][h] << "\t";
					}
					cout << endl;
				}
			}
		}
		else if (m1 < m2)
		{
			if (m2 > m3)
			{
				for (d = 0; d < S; d++) {
					for (e = 0; e < S; e++) {
						cout << f[d][e] << "\t";
					}
					cout << endl;
				}
			}
			else
				for (g = 0; g < S; g++) {
					for (h = 0; h < S; h++) {
						cout << i[g][h] << "\t";
					}
					cout << endl;
				}
		}
		
	}

int main()
{
	int o;
	o = da(int m);
	return 0;
}