#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    long long length = str.length();
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        char c;
        cin >> c;
        long long count(0);
        for (long long j = 0; j <= length; j++)
        {
            if (str[j] == c)
                count++;
        }
        cout << count << '\n';
    }
    return 0;
}