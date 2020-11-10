//https://codeforces.com/problemset/problem/686/A
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
	int n;ll ice;cin>>n>>ice;
	int dist = 0;
	while(n--)
	{
		char c;ll x;
		cin>>c;
		cin>>x;
		if(c=='+')ice+=x;
		else
		{
			if(x>ice)dist+=1;
			else ice-=x;
		}
	}
	cout<<ice<<" "<<dist;
}
//solved on 23 oct 2020
