//https://codeforces.com/contest/940/problem/B
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
typedef vector<int> vi ;
     
#define mp make_pair
#define pb push_back
#define rd(t,n) for (int i = 0; i < n; i++)cin>>t[i]
#define wr(t,n) for (int i = 0; i < n; i++)cout<<t[i]<<"*"
#define bug cout<<"*"
ll mod=1000000007;


int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n,k,A,B;cin>>n>>k>>A>>B;
	if(k==1){cout<< A*(n-1);return 0;}
	ll c=0;
	ll i=n;
	while (i>=k)
	{
		if(i%k==0){c=min(c+B,c+A*(i-i/k));i/=k;}
		else {c+=A*(i-(i/k)*k);i=(i/k)*k;}
	}
	cout << c+A*(i-1);
}
//solved on 18 nov 2019
