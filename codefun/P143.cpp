#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	if (((a % 2 == b % 2) && (b % 2 == c % 2) && (c % 2 == d % 2)) || ((a % 2 == b % 2) && (b % 2 == c % 2) && (c % 2 == e % 2)) || ((a % 2 == b % 2) && (b % 2 == d % 2) && (d % 2 == e % 2)) || ((a % 2 == c % 2) && (c % 2 == d % 2) && (d % 2 == e % 2)) || ((b % 2 == c % 2) && (c % 2 == d % 2) && (d % 2 == e % 2)))
		cout << 1;
	else
		cout << 0;
	return 0;
}
