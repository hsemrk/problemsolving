//https://codeforces.com/contest/1108/problem/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
     
#define pb push_back
#define rd(t,n) for (int i = 0; i < n; i++)cin>>t[i];

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	int q;cin>>q;
	for(int i=0;i<q;i++)
	{
		int l1,r1,l2,r2;cin>>l1>>r1>>l2>>r2;
		int a=l1;
		int b=l2;
		if (a==b)b=r2;
		cout<<a<<' '<<b<<'\n';
	}
}
//solved on 22 nov 2019
