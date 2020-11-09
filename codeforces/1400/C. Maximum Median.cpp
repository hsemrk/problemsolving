//https://codeforces.com/contest/1157/problem/B
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
#define mod 1000000007  //10 puis 9 +7


char convrec(int c)
{
	if(c==1)
	{
		return '1';
    }
	if(c==2)
	{
		return '2';
	}
	if(c==3)
	{
		return '3';
	}
	if(c==4)
	{
		return '4';
	}
	if(c==5)
	{
		return '5';
	}
	if(c==6)
	{
		return '6';
	}
	if(c==7)
	{
		return '7';
	}
	if(c==8)
	{
		return '8';
	}
	if(c==9)
	{
		return '9';
	}
}
int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;cin>>n;
	string s;cin>>s;
	int f[9];
	rd(f,9);
	int i=0;
	while (i<n && f[s[i]-'0'-1]<=s[i]-'0')i++;
	while (i<n && f[s[i]-'0'-1]>=s[i]-'0')
	{
		s[i]=convrec(f[s[i]-'0'-1]);
		i++;
	}
	cout<<s;
}
//solved on 20 nov 2019
