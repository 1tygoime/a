/*
  _                 _   _    _        _                  _
 | |__  __ _ _ _   | |_| |_ (_)  __ _| |_  ___   _ _ ___(_)
 | '_ \/ _` | ' \  |  _| ' \| | / _` | ' \/ -_) | '_/ _ \ |
 |_.__/\__,_|_||_|  \__|_||_|_| \__, |_||_\___| |_| \___/_|
                                |___/
*/
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000001
#define ull unsigned long long
bool prime[MAX];
void sieve(int n){
    for (int i = 0; i <= n; i++)
        prime[i] = true;
    prime[0]=false;
    prime[1]=false;
    for (int i = 2; i * i <= n; i++)
        if (prime[i] == true){
            for (int j = i*i; j <= n; j+=i)
                prime[j]=false;
    }
}

bool cp(ull n){
    if (n < 3)
        return false;
    if (sqrt(n) == (ull)sqrt(n))
        return true;
    return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    sieve(1000005);
    int n;
    ull a;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a;
        if (cp(a)){
            ull tmp = sqrt(a);
            if(prime[tmp] == true)
                cout << "YES \n";
            else
                cout << "NO \n";
        }
        else
            cout << "NO \n";
    }
    return 0;
}