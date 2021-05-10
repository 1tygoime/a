/* ---- BigNum with positive numbers ---- */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define bignum vector <ll>
const ll base = 1e9;
const int digits = 9;

/* ---------- Input & Output ---------- */

bool neg = 0;

bignum num2big(string ss){
  bignum abc;
  for(; ss.size() % digits; ss = '0' + ss);
  for(int i = (int)ss.size() - 1; i >= digits - 1; i -= digits){
    ll X = 0;
    for (int j = i - digits + 1; j <= i; j++)
      X = X * 10 + ss[j] - '0';
    abc.push_back(X);
  }
  return abc;
}

void display(const bignum &abc){
  cout << (abc.empty() ? 0 : abc.back());
  for(int i = (int)abc.size() - 2; i >= 0; i--)
    cout << setw(digits) << setfill('0') << abc[i];
  cout << "\n";
}
/* ---------- Input & Output ---------- */

/* -------------- Compare ------------- */
bool operator < (const bignum &aa, const bignum &bb){
  if (aa.size() != bb.size()) return aa.size() < bb.size();
  for (int i = (int)aa.size() - 1; i >= 0; i--)
    if (aa[i] != bb[i]) return aa[i] < bb[i];
  return 0;
}

bool operator ==(const bignum &aa, const bignum &bb){
  if (aa.size() != bb.size()) return 0;
  for(int i = 0; i < (int)aa.size(); i++)
    if (aa[i] != bb[i]) return 0;
  return 1;
}

bool operator > (const bignum &aa, const bignum &bb){
  return bb < aa;
}

bool operator <= (const bignum &aa, const bignum &bb){
  return !(aa > bb);
}

bool operator >= (const bignum &aa, const bignum &bb){
  return !(aa < bb);
}
/* -------------- Compare ------------- */

/* ------------- Operator ------------ */
bignum operator +(bignum aa, bignum bb){
  aa.resize(max(aa.size(), bb.size()));
  bb.resize(max(aa.size(), bb.size()));
  int carry(0);
  for(int i = 0; i < (int)aa.size(); i++){
    aa[i] += bb[i]+carry;
    carry = aa[i] >= base;
    aa[i] = (carry ? aa[i] - base : aa[i]);
  }
  if (carry) aa.push_back(carry);
  return aa;
}

bignum operator -(bignum aa, bignum bb){
  int carry(0);
  if (aa < bb){
    aa.swap(bb);
    neg = 1;
  }
  aa.resize(max(aa.size(), bb.size()));
  bb.resize(max(aa.size(), bb.size()));
  for(int i = 0; i < (int)aa.size(); i++){
    aa[i] -= bb[i] + carry;
    carry = aa[i] < 0;
    aa[i] = (aa[i] < 0 ? aa[i] + base: aa[i]);
  }
  while(aa.back() == 0 && aa.size() > 1) aa.pop_back();
  return aa;
}

const bignum zero = num2big("0");

bignum operator *(bignum aa, const ll &bb){
  int carry(0);
  if (bb == 0 || aa == zero) return zero;
  for(int i = 0; i < (int)aa.size(); i++){
    aa[i] = aa[i] * bb + carry;
    carry = aa[i] / base;
    aa[i] = (aa[i] >= base ? aa[i] % base: aa[i]);
  }
  if (carry) aa.push_back(carry);
  return aa;
}

bignum operator *(const bignum &aa, const bignum &bb){
  bignum res;
  int carry = 0;
  if (bb == zero || aa == zero) return zero;
  for(int i = 0; i < (int)aa.size(); i++){
    bignum tmp = bb * (1LL * aa[i]);
    tmp.insert(tmp.begin(), carry, 0);
    res = res + tmp;
    carry++;
  }
  return res;
}

/* ------------- Operator ------------ */

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  string x, y;
  cin >> x >> y;

  bignum a = num2big(x), b = num2big(y);

  display(a + b);

  bignum c = a - b;
  if(neg) cout << '-';
  display(c);

  display(a * b);

  return 0;
}


//#include <bits/stdc++.h>
//using namespace std;
//
//#define ll long long
//#define ull unsigned long long
//#define pb push_back
//#define pii pair<int,int>
//#define vi vector<int>
//#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
//#define SZ(s) (int)(s).size()
//#define fi first
//#define out(v) for(const auto &c : v ) cout << c << ' ';
//#define se second
//const int base = 1e8;
//#define digits 8
//bool check;
//typedef vector <ll> bignum;
//bignum x,y;
//bignum s2b(string s){
//    bignum a;
////    while (s.size()%digits)
////        s= '0'+s;
//    for(;s.size()%digits;s = '0' + s){}
//    for(int i = s.size()-1; i >= digits-1; i -= digits){
//        int x(0);
//        for (int j = i - digits + 1; j <= i; j++)
//            x = x*10 + s[j] - '0';
//        a.push_back(x);
//    }
//    return a;
//}
//
//void display(bignum a){
//    cout << (a.empty() ? 0 : a.back());
//    for(int i = a.size() - 2; i >= 0; i--)
//        cout << setw(digits) << setfill('0') << a[i];
//}
//
//bool operator < (bignum a, bignum b){
//    if (a.size() != b.size())
//        return a.size() < b.size();
//    for (int i = a.size()-1; i >= 0; i--)
//        if (a[i] != b[i]) return a[i] < b[i];
//    return 0;
//}
//
//bignum operator +(bignum a, bignum b){
//    a.resize(max(a.size(),b.size()));
//    b.resize(max(a.size(),b.size()));
//    int carry(0);
//    for(int i = 0; i < a.size(); i++){
//        a[i] += b[i]+carry;
//        carry = a[i] >= base;
//        a[i] = (carry ? a[i] - base : a[i]);
//    }
//    if (carry) a.push_back(carry);
//    return a;
//}
//
//bignum operator -(bignum a, bignum b){
//    int carry(0);
//    if (a < b){
//        a.swap(b);
//        check=1;
//    }
//    a.resize(max(a.size(),b.size()));
//    b.resize(max(a.size(),b.size()));
//    for(int i = 0; i < a.size(); i++){
//        a[i]-=b[i]+carry;
//        carry=a[i]<0;
//        a[i] = (a[i] < 0 ? a[i]+base: a[i]);
//    }
//    while(a.back()==0 && a.size() > 1) a.pop_back();
//    return a;
//}
//
//bool operator ==(bignum a, bignum b){
//    if (a.size() != b.size()) return 0;
//    for(int i = 0; i < a.size(); i++)
//        if (a[i] != b[i]) return 0;
//    return 1;
//}
//
//bignum multi1(bignum a, int b){
//    int carry(0);
//    bignum zero = s2b("0");
//    if (b == 0 || a == zero) return zero;
//    for(int i = 0; i < a.size(); i++){
//        a[i] = a[i] * b + carry;
//        carry = a[i] / base;
//        a[i] = (a[i] >= base ? a[i]%base: a[i]);
//    }
//    if (carry) a.push_back(carry);
//    return a;
//}
//
//bignum operator *(bignum a,bignum b){
//    bignum res;
//    int carry=0;
//    bignum zero = s2b("0");
//    if (b == zero || a == zero) return zero;
//    for(int i = 0; i < a.size(); i++){
//        bignum tmp = multi1(b,a[i]);
//        tmp.insert(tmp.begin(),carry,0);
//        res=res+tmp;
//        carry++;
//    }
//    return res;
//}
//
//
//int main(){
//    fast
//    string sa,sb;
//    cin >> sa >> sb;
//    x = s2b(sa);
//    y = s2b(sb);
//    display(x*y);
//    return 0;
//}
