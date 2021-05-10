#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    int n;
    cin >> a >> n;
    cout << char((a + n - 'a')%26 + 'a');
    return 0;
}