//https://codeforces.com/contest/1252/problem/A
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
	ll n;cin>>n;
	int t[n],b[n];rd(t,n);b[0]=t[n-1];
	for (int i = 1; i < n; i++)
	{
		b[i]=t[i-1];
	}
	for (int i = 0; i < n; i++)cout<<t[i]<<" ";
}
//solved on 2 dec 2019