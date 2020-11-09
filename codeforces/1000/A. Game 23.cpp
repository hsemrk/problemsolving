//https://codeforces.com/contest/1141/problem/A
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

int main() 
{
	ll n,x,m;cin>>n>>m;
	int cnt=0;
	if(m%n!=0)cout<<"-1";
	else
	{
		x=m/n;
		while(x%6==0)
		{
			x/=6;cnt+=2;
		}
		while(x%2==0)
		{
			x/=2;cnt++;
		}
		while(x%3==0)
		{
			x/=3;cnt++;
		}
		if(x==1)cout<<cnt;
		else cout<<"-1";
	}
}
//solved on 27 nov 2019