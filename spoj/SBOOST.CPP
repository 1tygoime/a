#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back

struct cpn{
    ll f, m;
    int id;
    bool operator <(cpn c){
        if(1.0 * f / m != 1.0 * c.f / c.m)
            return (1.0 * f / m > 1.0 * c.f / c.m);
        return (m < c.m);
    }
} car;

void operator +=(cpn &a, const cpn &b){
    a.f += b.f;
    a.m += b.m;
}

int n;
vector <cpn> cars;
vector <int> res;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> car.f >> car.m >> n;
	cars.resize(n);
	for(int i = 0; i < n; i++){
        cin >> cars[i].f >> cars[i].m;
        cars[i].id = i + 1;
	}

	sort(cars.begin(), cars.end());
	for(int i = 0; i < n; i++){
        if(cars[i] < car){
            res.pb(cars[i].id);
            car += cars[i];
        }
	}

	if (res.empty()) cout << "NONE";
	else{
        sort(res.begin(), res.end());
        for(const int &c: res)
            cout << c << '\n';
	}

	return 0;
}
