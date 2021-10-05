#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    if (n.size() == 1)
    {
        if (n[0] == '0')
            cout << "zero";
        if (n[0] == '1')
            cout << "one";
        if (n[0] == '2')
            cout << "two";
        if (n[0] == '3')
            cout << "three";
        if (n[0] == '4')
            cout << "four";
        if (n[0] == '5')
            cout << "five";
        if (n[0] == '6')
            cout << "six";
        if (n[0] == '7')
            cout << "seven";
        if (n[0] == '8')
            cout << "eight";
        if (n[0] == '9')
            cout << "nine";
    }
    else
    {
        if (n[0] == '1')
        {
            if (n[1] == '0')
                cout << "ten";
            if (n[1] == '1')
                cout << "eleven";
            if (n[1] == '2')
                cout << "twelve";
            if (n[1] == '3')
                cout << "thirteen";
            if (n[1] == '4')
                cout << "fourteen";
            if (n[1] == '5')
                cout << "fifteen";
            if (n[1] == '6')
                cout << "sixteen";
            if (n[1] == '7')
                cout << "seventeen";
            if (n[1] == '8')
                cout << "eighteen";
            if (n[1] == '9')
                cout << "nineteen";
        }
        else
        {
            if (n[0] == '2')
                cout << "twenty";
            if (n[0] == '3')
                cout << "thirty";
            if (n[0] == '4')
                cout << "forty";
            if (n[0] == '5')
                cout << "fifty";
            if (n[0] == '6')
                cout << "sixty";
            if (n[0] == '7')
                cout << "seventy";
            if (n[0] == '8')
                cout << "eighty";
            if (n[0] == '9')
                cout << "ninety";
            if (n[1] == '1')
                cout << "-one";
            if (n[1] == '2')
                cout << "-two";
            if (n[1] == '3')
                cout << "-three";
            if (n[1] == '4')
                cout << "-four";
            if (n[1] == '5')
                cout << "-five";
            if (n[1] == '6')
                cout << "-six";
            if (n[1] == '7')
                cout << "-seven";
            if (n[1] == '8')
                cout << "-eight";
            if (n[1] == '9')
                cout << "-nine";
        }
    }
    return 0;
}
