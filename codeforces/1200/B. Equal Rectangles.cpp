//https://codeforces.com/contest/1203/problem/B
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
ll mod=1000000007;
int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int q;cin>>q;
	while (q--)
	{
		int n;cin>>n;
		set<int> m;int x;
		vi v;
		for (int i = 0; i < 4*n; i++)
		{
			cin>>x;
			if(m.count(x)){v.pb(x);m.erase(x);}
			else m.insert(x);
		}
		if(!m.empty())cout<<"NO\n";
		else
		{
			sort(v.begin(),v.end());
			int s=v[0]*v[v.size()-1];
			int i=1;
			while(i<v.size()/2 && s==v[i]*v[v.size()-i-1])i++;
			if(i!=v.size()/2)cout<<"NO\n";
			else cout<<"YES\n";
		}
	}
}
//solved on 18 nov 2019
