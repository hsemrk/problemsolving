//https://codeforces.com/contest/1257/problem/A
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
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	int t;cin>>t;
	while (t--)
	{
		int n,x,a,b;cin>>n>>x>>a>>b;
		cout<<abs(a-b)+min(x,n-abs(a-b)-1)<<"\n";
	}
}
//solved on 13 nov 2019
