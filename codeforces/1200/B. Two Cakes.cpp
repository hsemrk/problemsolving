//https://codeforces.com/contest/1130/problem/B
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
	int t[2*n];int t1[n+1],t2[n+1];memset(t2,-1,sizeof(t2));memset(t1,-1,sizeof(t1));t1[0]=t2[0]=0;
	for (int i = 0; i < 2*n; i++)
	{
		cin>>t[i];
		if(t1[t[i]]==-1)t1[t[i]]=i;
		else t2[t[i]]=i;
	}
	ll d1=0,d2=0;
	for (int i = 0; i < n; i++)
	{
		d1+=abs(t1[i]-t1[i+1]);
		d2+=abs(t2[i]-t2[i+1]);
	}
	cout<<d1+d2;
}
//solved on 3 dec 2019