// Tham khao ve mat ma trong GF:  https://bit.ly/3blYUZE
// Mat ma Caesar https://bit.ly/3bneR1O
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 = " abcdefghijklmnopqrstuvwxyz ";
    string str2 = " defghijklmnopqrstuvwxyzabc ";
    string str3;
    getline(cin, str3);
    long long length = str3.length() - 1;
    long long length1 = str2.length() - 1;
    for (long long i = 0; i <= length; i++)
    {
        int location;
        for (long long j = 0; j <= length1; j++)
            if (str3[i] == str2[j])
                location = j;
        cout << str1[location];
    }
}
