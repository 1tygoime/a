#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    char c;
    cin >> n >> m >> c;
    for (int i = 1; i<= n; i++)
	{
	    for (int j = 1; j <= m; j++)
	    	cout << c;
	    cout << '\n';
	}
return 0;

}