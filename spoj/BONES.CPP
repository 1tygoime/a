#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ull unsigned long long

int s1, s2, s3, cnt[105];

int main(){
    cin >> s1 >> s2 >> s3;

    for(int i = 1; i <= s1; i++){
        for(int j = 1; j <= s2; j++){
            for(int k = 1; k <= s3; k++)
                cnt[i + j + k]++;
        }
    }

    cout << max_element(cnt + 1, cnt + 1 + s1 + s2 + s3) - cnt;

    return 0;
}
