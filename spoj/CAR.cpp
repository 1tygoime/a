#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct task{
    int a, b, pos;
    bool operator <(task t){
        if (a == t.a) return b < t.b;
        if (b == t.b) return a > t.a;
        return (a * t.b > b * t.a);
    }
} car[100005];

int n;
ll sum, T;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> car[i].a;
    for(int i = 0; i < n; i++) cin >> car[i].b;
    for(int i = 0; i < n; i++) car[i].pos = i + 1;
    sort(car, car + n);
    for(int i = 0; i < n; i++){
        T += car[i].b,
        sum += T * car[i].a;
    }
    cout << sum << "\n";
    for(int i = 0; i < n; i++) cout << car[i].pos << ' ';
}
