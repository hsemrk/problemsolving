//https://codeforces.com/problemset/problem/712/B
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
	string s;cin>>s;
	int u=0,d=0,l=0,r=0;
	for (int i = 0; i < s.length(); i++)
	{
		if(s[i]=='U')u++;
		if(s[i]=='D')d++;
		if(s[i]=='L')l++;
		if(s[i]=='R')r++;
	}
	if(l==r)
	{
		if(u==d)cout<<0;
		else if ((u+d)%2==0) cout<<max(u,d)-(u+d)/2;
		else cout << -1;	
	}
	else
	{
		if(u==d)
		{
			if((l+r)%2==0) cout<<max(l,r)-(r+l)/2;
			else cout<<-1;
		}
		else
		{
			if((l+r)%2==0 && (u+d)%2==0)cout<<max(l,r)-(r+l)/2 + max(u,d)-(u+d)/2;
			else if ((l+r)%2!=0 && (u+d)%2!=0)cout<<(abs(l-r)+abs(u-d))/2;
			else cout<<-1;
		}
	}
}
//solved on 29 mar 2020
