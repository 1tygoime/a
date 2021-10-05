#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a1, a2, b1, b2, c1, c2, x, y;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	x = ((b2 * c1) - (b1 * c2)) / ((a1 * b2) - (a2 * b1));
	y = ((c2 * a1) - (c1 * a2)) / (((a1 * b2) - (a2 * b1)));
	cout << x << ' ' << y;
	return 0;
}
