#include <bits/stdc++.h>
using namespace std;
int n,x[30],k;
bool d[30];

void Xuat(){
    for (int a = 1; a <= k; a++)
        cout << x[a] << ' ';
    cout << '\n';
}
void Try(int i){
    for (int j = 1; j <= n; j++){
        if(d[j]==false){
            x[i]=j;
            d[j]=true;
            if (i == k)
                Xuat();
            else
                Try(i+1);
            d[j]=false;
        }
    }
}
int main()
{
    cin >> n >> k;
    Try(1);
}
