//https://codeforces.com/problemset/problem/313/B
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
typedef vector<int> vi ;
     
#define mp make_pair
#define pb push_back
#define rd(t,n) for (int i = 0; i < n; i++)cin>>t[i]
#define wr(t,n) for (int i = 0; i < n; i++)cout<<t[i]<<"\n"
#define bug cout<<"*"
#define mod 1000000007  //10 puis 9 +7
int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;cin>>s;
	int t[s.length()];t[0]=0;
	for (int i = 1; i < s.length(); i++)
	{
		if(s[i]==s[i-1])t[i]=t[i-1]+1;
		else t[i]=t[i-1];
	}
	int q;cin>>q;
	while(q--)
	{
		int l,r;cin>>l>>r;
		cout<<t[r-1]-t[l-1]<<"\n";
	}
}
//solved on 19 mar 2020
