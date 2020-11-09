//https://codeforces.com/contest/978/problem/C
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
	int n,m;cin>>n>>m;
	ll a[n],b[m];
	for (int i = 0; i < n; i++)cin>>a[i];
	for (int i = 0; i < m; i++)cin>>b[i];
	int i=0;ll acc=0;
	for (int j = 0; j < m; j++)
	{
		while (b[j]>(a[i]+acc))
		{
			acc+=a[i];
			i++;
		}
		cout<<i+1<<" "<<b[j]-acc<<"\n";
	}
}
//solved on 12 nov 2019
