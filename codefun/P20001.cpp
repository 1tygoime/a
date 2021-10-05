#include <bits/stdc++.h>
using namespace std;
int main()
{
    char RightAns[] = {'B', 'C', 'D', 'B', 'A', 'D', 'C', 'D', 'A', 'B', '\0'};
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char StudentAns[1000];
        int diem(0);
        for (int j = 0; j < 10; j++)
        {
            cin >> StudentAns[j];
            if ((int)StudentAns[j] == (int)RightAns[j])
                diem++;
        }
        cout << diem << "/10 \n";
    }
    return 0;
}