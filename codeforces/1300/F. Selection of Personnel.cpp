//https://codeforces.com/problemset/problem/630/F
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
	int fac5 = 120 ;
	int n;cin>>n;
	unsigned long long int s=n;
	for (int i = 1; i < 5; i++)
		s*=(n-i);
	s/=fac5;
	cout<<s + s*(n-5)/6 + s*(n-5)*(n-6)/42;
}
//solved on 29 oct 2020
