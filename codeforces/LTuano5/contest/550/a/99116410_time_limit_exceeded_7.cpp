#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const string filename = "ABC";
const int nmax=35;
int t,n,x,i;
int main() {
//    freopen( (filename + ".inp").c_str(), "r", stdin);
//    freopen( (filename + ".out").c_str(), "w", stdout);
    fast
    string s;
    cin >> s;
    if(s.size()<=3){
        cout << "NO";
        return 0;
    }
    int n = s.size();
    for(int i = 0; i < n-1; i++){
        if(s.substr(i,2)=="AB"){
            for(int j=i+2;j < n-1; j++)
                if(s.substr(j,2)=="BA"){
                    cout<<"YES";
                    return 0;
                }
        }
        else if(s.substr(i,2)=="BA"){
            for(int j=i+2;j < n-1; j++)
                if(s.substr(j,2)=="AB"){
                    cout<<"YES";
                    return 0;
                }
        }
    }
    cout<<"NO";
	return 0;
}
