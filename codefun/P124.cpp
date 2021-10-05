#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	long double a[100005];
	cin >> n;
	for (long long i = 1; i <= n; i++)
		cin >> a[i];
	for (long long i = 1; i <= n; i++)
	{
		if (a[i] < 0 || a[i] > 10)
			cout << -1 << '\n';
		else
		{
			if (a[i] >= 9)
				cout << "A+" << '\n';
			else if (a[i] >= 8)
				cout << "A" << '\n';
			else if (a[i] >= 7)
				cout << "B" << '\n';
			else if (a[i] >= 6)
				cout << "C" << '\n';
			else if (a[i] >= 5)
				cout << "D" << '\n';
			else if (a[i] < 5)
				cout << "E" << '\n';
		}
	}
	return 0;
}