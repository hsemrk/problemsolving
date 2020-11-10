//https://codeforces.com/problemset/problem/339/A
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
	string ch;cin>>ch;
	vector<char> v;
	for (int i = 0; i < ch.length(); i+=2)
		v.pb(ch[i]);
	sort(v.begin(),v.end());
	cout<<v[0];
	for (int i = 1; i < v.size(); i++)
		cout<<"+"<<v[i];
}
//solved on 4 nov 2020
