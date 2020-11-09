//https://codeforces.com/contest/1141/problem/B
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
typedef vector<int> vi ;
     
#define mp make_pair
#define pb push_back
#define rd(t,n) for (int i = 0; i < n; i++)cin>>t[i]
#define wr(t,n) for (int i = 0; i < n; i++)cout<<t[i]<<"*"
#define bug cout<<"*"
#define mod 1000000007  //10 puis 9 +7
string inc(string ch)
{
	for (int i = 0; i < 10; i++)
	{
		if(ch[i]==0){ch[i]='1';break;}
		ch[i]='0';
	}
}
int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n;cin>>n;
	int t[n];rd(t,n);
	int deb=0,fin=0,mx=0;
	int i=0,j;
	if(t[0]==1)
	{
		while (t[i]==1)
		{
			i++;
		}
		deb=i;
	}
	while (i<n)
	{
		j=i;
		while(i<n && t[i]==1)
		{
			i++;
		}
		fin=i-j;
		mx=max(mx,i-j);
		i++;
	}
	cout<<max(mx,deb+fin);
}
//solved on 27 nov 2019