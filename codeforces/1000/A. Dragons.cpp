//https://codeforces.com/problemset/problem/230/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
typedef vector<int> vi ;
     
#define mp make_pair
#define pb push_back
#define rd(t,n) for (int i = 0; i < n; i++)cin>>t[i]
#define wr(t,n) for (int i = 0; i < n; i++)cout<<t[i]<<" "
#define bug cout<<"*"
#define mod 1000000007  //10 puis 9 +7

int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int s,n;cin>>s>>n;
	pair<int,int> t[n];
	for (int i = 0; i < n; i++)
	{
		int x,y;cin>>x>>y;
		t[i]=make_pair(x,y);
	}
	sort(t,t+n);
	for (int i = 0; i < n; i++)
	{
		if(t[i].first<s)s+=t[i].second;
		else 
		{
			cout<<"NO"; 
			return 0;
		}
	}
	cout<<"YES";
}
//solved on 28 mar 2020
