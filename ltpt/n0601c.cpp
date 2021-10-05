#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

vector<string> pos, neg;

bool sortpos(string a, string b)
{
    if (a.size() != b.size())
        return a.size() < b.size();
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return a[i] < b[i];
    return 0;
}

bool sortneg(string a, string b)
{
    if (a.size() != b.size())
        return a.size() > b.size();
    for (int i = 1; i < a.size(); i++)
        if (a[i] != b[i])
            return a[i] > b[i];
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, token = "", res = "";
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '-')
        {
            int j;
            //            string t = "-";
            res.pb(s[i]);
            for (j = i + 1; j < s.size(); j++)
            {
                if (!isdigit(s[j]))
                    break;
                res.pb(s[j]);
            }
            i = j;
            //            res += t;
        }
        //        string t = "";
        else if (isdigit(s[i]))
            res.pb(s[i]);
        else
            res.pb(' ');
    }

    stringstream ss(res);
    while (ss >> token)
    {
        if (token.front() == '0')
            while (token.front() == '0' && token.size() > 1)
                token.erase(0, 1);
        if (token[1] == '0')
            while (token.front() == '0' && token.size() > 2)
                token.erase(1, 1);
        if (token.front() == '-')
            neg.pb(token);
        else
            pos.pb(token);
    }

    sort(pos.begin(), pos.end(), sortpos);
    sort(neg.begin(), neg.end(), sortneg);

    for (const string &i : neg)
        cout << i << ' ';
    for (const string &i : pos)
        cout << i << ' ';

    return 0;
}
