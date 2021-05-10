#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sz(v) (int)(v).size()
//#define OPENFILE
#define filename "DIGIT0"

int cnt[10005], freq[10005], c2, c5;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    #ifdef OPENFILE
    freopen(filename".inp", "r", stdin);
    freopen(filename".out", "w", stdout);
    #endif // OPENFILE

    string s;
    cin >> s;

    for(const char &c : s)
        freq[c - 'a']++;
    for(int i = 1; i <= sz(s); i++)
        cnt[i]++;
    for(const int &c : freq){
        for(int i = 1; i <= c; i++)
            cnt[i]--;
    }
    for(int i = 2; i <= sz(s); i++){
        if (cnt[i]){
            int tmp = i;
            while(tmp % 2 == 0)
                c2 += cnt[i], tmp /= 2;
            while(tmp % 5 == 0)
                c5 += cnt[i], tmp /= 5;
        }
    }

    cout << min(c2, c5);
    return 0;
}
