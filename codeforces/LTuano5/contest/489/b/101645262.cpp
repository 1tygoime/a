/** LTo5 **/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define SZ(s) (int)(s).size()
#define MAX 200005
#define FORU(i,a,b) for (int i = (a); i < (b); i++)

ll a[MAX],b[MAX];
int main(){
    int n,m,k(1),res(0);
    cin >> n;
    FORU(i,0,n)
        cin >> a[i];
    cin >> m;
    FORU(i,0,m)
        cin >> b[i];
    sort(a,a+n);
    sort(b,b+m);
    int i=0,j=0;
    while (i < n && j < m){
        if (abs(a[i]-b[j])<=k){
            res++;
            i++;
            j++;
        }
        else if(a[i]-b[j]>k)
            j++;
        else
            i++;
    }
    cout<<res;
    return 0;
}
