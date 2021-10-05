#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count(0);
    string str1, str2;
    int arr[255];
    cin >> str1 >> str2;
    for (int i = 0; i < 255; i++)
        arr[i] = 0;
    for (int i = 0; i < str1.length(); i++)
        arr[str1[i]] = 1;
    for (int i = 0; i < str2.length(); i++)
        if (arr[str2[i]] == 1)
            arr[str2[i]] = -1;
    for (int i = 0; i < 255; i++)
        if (arr[i] == -1)
            count++;
    cout << count;
    return 0;
}