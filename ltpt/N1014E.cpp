#include <bits/stdc++.h>
#define ll long long
using namespace std;
int r=0;
ll na(ll a,ll b,ll mod)
{
	a%=mod;
	b%=mod;
	ll q=(long double)a*b/mod;
	return ((a*b-q*mod)%mod+mod)%mod;
}
ll mu(ll a,ll b,ll mod)
{
	if (b==1) return a;
	ll t=mu(a,b/2,mod);
	t=na(t,t,mod);
	if (b%2==1) t=na(t,a,mod);
	return t;
}
ll random(ll l, ll h)
{
    return l + ((long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) * (RAND_MAX + 1) + (long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) + (long long)rand() * (RAND_MAX + 1) + rand()) % (h - l + 1);
}
bool test(ll n,ll d)
{
	ll a=random(2,n-5);
	ll x=mu(a,d,n);
	if (x==1 || x==n-1) return true;
	while(d!=n-1){
		x=na(x,x,n);
		d*=2;
        if (x==1) return false;
        if (x==n-1) return true;
	}
	return false;
}
bool NT(ll n)
{
	if (n<2) return false;
	if (n==2 || n==3 || n==5) return true;
	if (n%2==0 || n%5==0) return false;
	ll d=n-1;
	while(d%2==0) {
		d/=2;
	}
	for (int i=1;i<=200;i++)
		if (test(n,d)==false) return false;
	return true;
}
int main()
{
	ll n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<(NT(n) ? "YES" : "NO") << '\n';
	}
}
