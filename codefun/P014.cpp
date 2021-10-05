#include <bits/stdc++.h>
using namespace std;
int main()
{
	char a, b;
	cin >> b >> a;
	cout << (int(b) < int(a) ? int(a) - int(b) - 1 : 0);
	return 0;
}
