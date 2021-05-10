#include<bits/stdc++.h>
using namespace std;
bool cheo1[21],cheo2[21],cot[11];
long long n,cnt(0);
void Try(int m,int i,int j){
	if(m>n){
		cnt++;
		return;
	}
	if(i>n){
		return;
	}
	if(j>n){
		Try(m,i+1,1);
		return;
	}
	if(cheo1[i+j]==false&&cheo2[i-j+n]==false&&cot[j]==false){
		cheo1[i+j]=true;
		cheo2[i-j+n]=true;
		cot[j]=true;
		Try(m+1,i+1,1);
		cheo1[i+j]=false;
		cheo2[i-j+n]=false;
		cot[j]=false;
	}
	Try(m,i,j+1);
}
int main (){
	cin>>n;
	Try(1,1,1);
	cout<<cnt;
}
