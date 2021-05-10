#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c;
    cin >> a >> b >> c;
    if (a == 0 && b == 0 && c == 0)
        cout << 0;
    else
    {
        if (a == b * c || b == c * a || c == a * b)
        	cout << "/";
        else 
        	cout << 0;
    }
    return 0;
}