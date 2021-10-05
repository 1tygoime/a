#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
int main()
{
    int n, a[MAX], b[MAX];
    bool chk = false;
    cin >> n;
    for (int i = 0; i < MAX; i++)
        b[i] = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        b[a[i]]++;
        if (b[a[i]] > 2)
        {
            cout << a[i] << ' ';
            b[a[i]] -= 3;
            chk = true;
        }
    }
    if (chk == false)
        cout << 0;
    return 0;
}

// v1 - theo thu tu
/*
//    for (int i = 0; i < n; i++){
//        cin >> a[i];
//        b[a[i]]++;
//    }
//    for (int i = 0; i < MAX; i++){
//        if (b[i] > 2){
//            chk=true;
//            int k=b[i];
//            for (int j = 1; j <= k/3; j++)
//                cout << i << ' ';
//        }
//    }
//    if (!(chk))
//        cout<<0;

*/
