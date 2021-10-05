#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    string str1, str2;
    cin >> str1 >> str2 >> n;
    for (long long i = 1; i <= n; i++)
    {
        long long find;
        cin >> find;
        if (find > str1.length() || find > str2.length())
            cout << "No \n";
        else
        {
            cout << (str1[find - 1] == str2[find - 1] ? "Yes \n" : "No \n");
        }
    }
    return 0;
}
