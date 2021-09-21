//Johnson's Algorithm
#include<bits/stdc++.h>
using namespace std;

const int N = 1e4 + 5;

struct job{
  int x, y, pos;

  bool operator < (const job &c) const {
    return x < c.x;
  }

  bool operator > (const job &c) const {
    return y > c.y;
  }
} a[N], b[N];

int tmp[N], timeA, timeB;

void do_job(job *v, int bound){
  for(int i = 1; i <= bound; i++){
    timeA += a[i].x;
    timeB = max(timeB, timeA) + a[i].y;
  }
}

int main(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++)
    cin >> tmp[i];

  int n1 = 0, n2 = 0;
  for(int i = 1, y; i <= n; i++){
    cin >> y;
    if(tmp[i] <= y)
      a[++n1] = {tmp[i], y, i};
    else
      b[++n2] = {tmp[i], y, i};
  }

  sort(a + 1, a + 1 + n1);
  sort(b + 1, b + 1 + n2, greater<job>());

  do_job(a, n1);
  do_job(b, n2);

  cout << timeB << '\n';
  for(int i = 1; i <= n1; i++)
    cout << a[i].pos << ' ';
  for(int i = 1; i <= n2; i++)
    cout << b[i].pos << ' ';

  return 0;
}
