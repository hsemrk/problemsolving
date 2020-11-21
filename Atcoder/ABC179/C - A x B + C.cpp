//https://atcoder.jp/contests/abc118/tasks/abc179_c
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
	int n;cin>>n;
	int x = n-1;
	for (int i = 2; i < n; i++)
	{
		if(n%i==0)x+=n/i - 1;
		else x+=n/i;
	}
	cout<<x;
}
//solved on 6 Oct 2020