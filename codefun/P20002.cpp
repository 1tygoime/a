#include <bits/stdc++.h>
using namespace std;

struct Item
{
  string name;
  int price;
  //  string des;
} goods[10001];

struct Invoice
{
  string name;
  int amount;
} bills[10001];

int n, m, sum;
map<string, int> pos;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  // Kho
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> goods[i].name >> goods[i].price,
        pos[goods[i].name] = i;
  cout << "In stock:\n";
  for (int i = 1; i <= n; i++)
    cout << i << ' ' << goods[i].name << ' ' << goods[i].price << '\n';

  // Hoa don
  cin >> m;
  for (int i = 1; i <= m; i++)
    cin >> bills[i].name >> bills[i].amount;
  // In hoa don
  cout << "Invoice:\n";
  for (int i = 1; i <= m; i++)
  {
    cout << i << ' ' << bills[i].name << ' ' << bills[i].amount << ' ' << goods[pos[bills[i].name]].price * bills[i].amount << '\n';
    // Tinh tien
    sum += goods[pos[bills[i].name]].price * bills[i].amount;
  }

  cout << "Total: " << sum;

  return 0;
}
