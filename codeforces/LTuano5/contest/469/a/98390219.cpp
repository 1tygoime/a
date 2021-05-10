/*
  _                 _   _    _        _                  _
 | |__  __ _ _ _   | |_| |_ (_)  __ _| |_  ___   _ _ ___(_)
 | '_ \/ _` | ' \  |  _| ' \| | / _` | ' \/ -_) | '_/ _ \ |
 |_.__/\__,_|_||_|  \__|_||_|_| \__, |_||_\___| |_| \___/_|
                                |___/
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,a[100],q,cnt(0),c[100];
    int b[100];
    cin >> n >> p;
    for (int i = 1; i <= p; i++) cin >> a[i];
    cin >> q;
    for (int i = 1; i <= q; i++) cin >> c[i];
    for (int i = 1; i <= 100; i++) b[i] = 0;
    for (int i = 1; i <= p; i++){
        b[a[i]] = 1;
    }
    for (int i = 1; i <= q; i++){
        b[c[i]] = 1;
    }
    for (int i = 1; i <= 100; i++)
        if (b[i] == 1) cnt++;
    cout <<(cnt==n?"I become the guy.":"Oh, my keyboard!");
    return 0;
}