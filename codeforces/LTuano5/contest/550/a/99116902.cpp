#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const string filename = "ABC";
const int nmax=35;
bool ab,ba;
int t,n,x,i;
int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    string s;
    cin >> s;
//    auto start = high_resolution_clock::now();
    if(s.size()<=3){
        cout << "NO";
        return 0;
    }
    int n = s.size();
    for(int i = 0; i < n-1; i++){
        if(!ab&&s.substr(i,2)=="AB"){
            ab=true;
            for(int j=i+2;j < n-1; j++)
                if(s.substr(j,2)=="BA"){
                    cout<<"YES";
                    return 0;
                }
        }
        else if(!ba&&s.substr(i,2)=="BA"){
            ba=true;
            for(int j=i+2;j < n-1; j++)
                if(s.substr(j,2)=="AB"){
                    cout<<"YES";
                    return 0;
                }
        }
    }
//    auto stop = high_resolution_clock::now();
//    auto duration = duration_cast<microseconds>(stop - start);
//    cout<<'\n'<<duration.count();
    cout<<"NO";
	return 0;
}
