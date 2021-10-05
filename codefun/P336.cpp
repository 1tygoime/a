// Nhan thay cau hinh dau la 111, cau hinh cuoi la nnnn, nhu vay ta xet tu duoi len tren,
// neu gap 1 chu so != n => tang 1 dvi, cho tat ca cac phan tu sau bang 1
#include <bits/stdc++.h>
using namespace std;
int n, k, a[15], cnt(0);
bool check = false;
void display()
{
    // kiem tra neu day ko phai la day k giam
    for (int i = 1; i < k; i++)
    {
        if (a[i] > a[i + 1])
            return;
    }
    cnt++;
}
//sinh chinh hop tiep theo
void nextString()
{
    // xet tu duoi len tren
    int i = k;
    // cau hinh cuoi cung la (nn..n) (k so n)
    while (a[i] == n && i > 0)
        i--;
    if (i == 0)
        check = true;
    else
    {
        // cho chu so != n tang len 1
        a[i]++;
        //cho tat ca cac phan tu sau = 1, sinh chinh hop lap tiep theo
        for (int j = i + 1; j <= k; j++)
            a[j] = 1;
    }
}

int main()
{
    cin >> k >> n;
    //cau hinh dau tien
    for (int i = 1; i <= k; i++)
        a[i] = 1;
    while (!check)
    {
        display();
        nextString();
    }
    cout << cnt;
}
