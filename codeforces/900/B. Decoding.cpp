//https://codeforces.com/problemset/problem/746/B
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
	string ch;cin>>ch;
	char t[n];
	for (int i = 0; i <= n; i+=2)
	{
		t[n-1-i/2]=ch[n-1-i];
		t[i/2]=ch[n-1-i-1];
	}
	if(n%2==1)t[n/2]=ch[0];
	else
	{
		t[n/2]=ch[1];
		t[n/2-1]=ch[0];
	}
	
	for (int i = 0; i < n; i++)
		cout<<t[i];
}
//solved on 4 nov 2020
