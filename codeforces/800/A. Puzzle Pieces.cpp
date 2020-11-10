//https://codeforces.com/problemset/problem/1345/A
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
		int n,m;cin>>n>>m;
        if(min(n,m)==1)cout<<"YES\n";
        else if(n==2 && m==2)cout<<"YES\n";
        else cout<<"NO\n";
	}
}
//solved on 23 oct 2020
