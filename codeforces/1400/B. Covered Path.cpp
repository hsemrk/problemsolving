//https://codeforces.com/contest/534/problem/B
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
	int v1,v2,t,d;cin>>v1>>v2>>t>>d;
	int s=v1,res=v1;
	for (int i = 1; i < t; i++)
	{
		s=min(s+d,v2+(t-i-1)*d);
		res+=s;
	}
	cout<<res;
}
//solved on 7 dec 2019