//https://codeforces.com/contest/626/problem/A
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
	ll n;cin>>n;
	string s;cin>>s;
	int total=0;
	for (int i = 0; i < n; i++)
	{
		int x=0,y=0;
		for (int k = i; k < n; k++)
		{
			if(s[k]=='U')y++;
			if(s[k]=='D')y--;
			if(s[k]=='L')x--;
			if(s[k]=='R')x++;
			if(x==0 && y==0)total++;
		}
	}
	cout<<total;
}
//solved on 2 dec 2019