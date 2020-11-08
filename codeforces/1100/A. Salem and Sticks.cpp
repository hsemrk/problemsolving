  
//https://codeforces.com/problemset/problem/1105/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	int n;cin>>n;
	vector<ll> t;
	ll x;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		t.push_back(x);
	}
	sort(t.begin(),t.end());
	ll tmin=t[0],tmax=t[n-1];
	ll cost=0;ll tt;ll cc=100*1000+1;
	for(ll i=tmin;i<=tmax;i++)
	{
		for (int j = 0; j < n; ++j)
		{
			if (t[j]>i+1)
				cost+=abs(t[j]-(i+1));
			if (t[j]<i-1)
				cost+=abs(t[j]-(i-1));
		}
		if (cost<cc)
		{
			cc=cost;
			tt=i;
			cost=0;
		}
	}
	cout << tt << " " << cc;
}
//solved on 2 oct 2019