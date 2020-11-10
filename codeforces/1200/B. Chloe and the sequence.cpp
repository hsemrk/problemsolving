//https://codeforces.com/problemset/problem/743/B
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
	int n;ll k;cin>>n>>k;

	while(n>0 && k!=(pow(2,n))/2)
	{
		if(k>(pow(2,n))/2)
		{
			k=pow(2,n)-k;
			n--;
		}
		else if (k<(pow(2,n))/2) n--;
	}
	if(k==1)cout<<1;
	else cout<<n;
}
//solved on 28 mar 2020
