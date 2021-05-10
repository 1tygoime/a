#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

void sol(){
    int n;
    cin >> n;
    vector <int> x(n), y(n);

    for(int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    cout << 1LL * (x[n / 2] - x[(n - 1) / 2] + 1) * (y[n / 2] - y[(n - 1) / 2] + 1) << '\n';
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	for(cin >> t; t--; ){
        sol();
	}

	return 0;
}
