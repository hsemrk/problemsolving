//https://codeforces.com/contest/1270/problem/A
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
	int q;cin>>q;
	while(q--)
	{
		int n,k1,k2;cin>>n>>k1>>k2;
		bool test=false;
		for (int i = 0; i < k1; i++)
		{
			int x;cin>>x;
			if(x==n)test=true;
		}
		for (int i = 0; i < k2; i++)
		{
			int x;cin>>x;
		}
		if(test)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
//solved on 29 dec 2019
