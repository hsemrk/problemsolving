//https://codeforces.com/problemset/problem/1154/B
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
	int n;cin>>n;
	int t[n];rd(t,n);sort(t,t+n);
	if(n==1){cout<<0;return 0;}
	int d=abs(t[1]-t[0]);
	if(n==2)
	{
		if(d%2==0)cout<<d/2;
		else cout<<d;
		return 0;
	}
	int i=1;
	while(abs(t[i]-t[i-1])==0)i++;
	d=abs(t[i]-t[i-1]);
	while (i<n && (abs(t[i]-t[i-1])==d || abs(t[i]-t[i-1])==0))i++;
	if(i==n)
	{
		set<int> s;
		for (int i = 0; i < n; i++)s.insert(t[i]);
		if(s.size()==1)cout<<0;
		else if(s.size()==2)
		{
			if(d%2==0)cout<<d/2;
			else cout<<d;
		}
		else if (s.size()==3) cout<<d;
		else cout<<-1;
	}
	else cout<<-1;
}
//solved on 29 mar 2020
