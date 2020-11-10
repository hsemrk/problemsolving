//https://codeforces.com/problemset/problem/630/M
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
	ll n;cin>>n;
	n=-(n%360);
	if(n>180)n=n-360;
	if(n<-180)n=n+360;

	if(n>=-45 && n<=45)cout<<0;
	if(n<-45 && n>=-135)cout<<1;
	if((n<-135 && n>=-180) || (n>=135 && n<=180))cout<<2;
	if(n>45 && n<135)cout<<3;
}
//solved on 29 mar 2020
