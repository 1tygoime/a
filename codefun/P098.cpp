//cre:G4G :)
#include <bits/stdc++.h>
using namespace std;

void del(string str, int n, string &res){
    //n==0=>nothing to del
	if (n == 0){
		res.append(str);
		return;
	}
	int len = str.length();
//s.size()<n=>del all of digit
	if (len <= n)
		return;
//find the location of mindigit
	int mindigit = 0;
	for (int i = 1; i<=n ; i++)
		if (str[i] < str[mindigit])
			mindigit = i;
//create new string from mindigit;
	res.push_back(str[mindigit]);
//find min from [min+1..len-1] using recursive;
	string new_str = str.substr(mindigit+1, len-mindigit);
	del(new_str, n-mindigit, res);
}


int main()
{
	string str,res="";
	int k;
	cin >> k >> str;
	del(str,k,res);
	return 0;
}
