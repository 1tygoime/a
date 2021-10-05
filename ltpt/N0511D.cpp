#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	for (int k = (n - 1) / 2; k >= 0; k--)
	{
		if (k == n - k - 1)
			cout << a[k][k] << ' ';
		else
		{
			long long s(0);
			for (int i = k; i < n - k; i++)
				s += a[k][i] + a[n - k - 1][i];
			for (int i = k + 1; i < n - k - 1; i++)
				s += a[i][k] + a[i][n - k - 1];
			cout << s << ' ';
		}
	}
	return 0;
}
