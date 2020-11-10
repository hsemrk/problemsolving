//https://codeforces.com/contest/1388/problem/A
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
		int n;cin>>n;
		if(n<31)cout<<"NO\n";
		else if (n==36)cout<<"YES\n6 10 15 5\n";
		else if (n==40)cout<<"YES\n6 10 15 9\n";
		else if (n==44)cout<<"YES\n6 10 15 13\n";
		else
		{
			cout<<"YES\n6 10 14 "<<n-6-10-14<<"\n";
		}
	}
}
//solved on 30 jul 2020
