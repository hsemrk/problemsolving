//https://codeforces.com/contest/1257/problem/B
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
     
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define all(v) (v).begin(),(v).end()
#define max(a,b) (a>b ? a : b)
#define min(a,b) (a<b ? a : b)
//#define readt(int t[],int n)  for (int i = 0; i < n; i++)cin>>t[i];

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	int t;cin>>t;
	while (t--)
	{
		int x,y;cin>>x>>y;
		if(x==y)cout<<"YES\n";
		else if(x==1)cout<<"NO\n";
		else if (x>y)cout<<"YES\n";
		else if(x==2 && y==3)cout<<"YES\n";
		else
		{
			if(x<=3)cout<<"NO\n";
			else cout<<"YES\n";
		}
	}
}
//solved on 13 nov 2019
