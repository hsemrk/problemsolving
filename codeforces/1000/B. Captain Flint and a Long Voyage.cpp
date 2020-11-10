//https://codeforces.com/contest/1388/problem/B
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
	int q;cin>>q;
	while(q--)
	{
		int n; cin >> n ;
		string ch="8";
		for (int i = 0; i < (n-1)/4; i++)
		{
			ch+='8';
		}
		int l = n -ch.length();
		for (int i = 1; i <= l; i++)
		{
			ch='9'+ch;
		}
		cout<<ch<<"\n";
	}
}
//solved on 30 jul 2020
