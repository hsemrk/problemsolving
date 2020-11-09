//https://codeforces.com/contest/1255/problem/B
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
int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int q;cin>>q;
	while (q--)
	{
		int n,m;cin>>n>>m;int cost=0;
		vector <pair<int,int>> v;for (int i = 0; i < n; i++){int x;cin>>x;cost+=2*x;v.pb(mp(x,i));}
		if(n==2 || m<n)cout<<"-1\n";
		else
		{
			sort(v.begin(),v.end());
			cost+=(v[0].first+v[1].first)*(m-n);
			cout<<cost<<"\n";
			for (int i = 1; i < n; i++)
			{
				cout<<i<<" "<<i+1<<"\n";	
			}
			cout<<n<<" "<<1<<"\n";
			for (int i = 0; i < m-n; i++)
			{
				cout<<v[0].second+1<<" "<<v[1].second+1<<"\n";
			}
		}
		
	}
}
//solved on 19 nov 2019
