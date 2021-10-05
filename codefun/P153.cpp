#include <iostream>
using namespace std;
string s;
int main()
{
    cin >> s;
    if (s == "Uya")
        cout << "0s";
    else if (s == "Kag" || s == "Shi" || s == "Iya" || s == "Nge")
        cout << 0;
    else
        cout << 1;
    return 0;
}
