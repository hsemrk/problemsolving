//https://codeforces.com/contest/813/problem/A
//*********Houssem Rekik********
#include <bits/stdc++.h>
using namespace std;

typedef long long  ll;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int n; cin>>n;
	ll l,s=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>l;s=s+l;
	}
	int m;cin>>m;
	ll x,r,k=0;
	for (int i = 0; i < m; ++i)
	{
		cin>>x>>r;
		if(s<=r){k=1;break;}
	}
	if(k==1 && m!=0)cout<< max(s,x);
	else cout<<"-1";
}
//Solved on 5 Jun 2017
