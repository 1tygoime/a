#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    for (int i = 1; i < s1.length(); i++)
        if (isupper(s1[i]))
            s1[i] += 32;
    for (int i = 1; i < s2.length(); i++)
        if (isupper(s2[i]))
            s2[i] += 32;
    for (int i = 1; i < s3.length(); i++)
        if (isupper(s3[i]))
            s3[i] += 32;
    if (islower(s1[0]))
        s1[0] -= 32;
    if (islower(s2[0]))
        s2[0] -= 32;
    if (islower(s3[0]))
        s3[0] -= 32;
    cout << s1 << ' ' << s2 << ' ' << s3;
    return 0;
}
