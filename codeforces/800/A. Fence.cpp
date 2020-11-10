//https://codeforces.com/contest/1422/problem/A
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
	//freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
	int q;cin>>q;
	while(q--)
	{
		ll a,b,c;cin>>a>>b>>c;
		cout<<a+b+c-1<<"\n";
	}
}
//solved on 29 oct 2020
