#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int check = str.find("hendricks");
    if (check == -1)
        cout << "TRASH DOCUMENT.";
    else
        cout << "HENDRICKS FOUND.";
    return 0;
}