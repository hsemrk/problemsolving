  
//https://codeforces.com/problemset/problem/1070/K
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	ll n,k,s=0;cin >>n>>k;
	ll t[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> t[i];s+=t[i];
	}
	vector<ll> tt;
	if(s%k==0)
	{
		ll sum=0,count=0;
		for (int i = 0; i < n; ++i)
		{
			sum+=t[i];count++;
			if (sum==s/k)
			{
				tt.push_back(count);
				count=0;sum=0;
			}
			if (sum>s/k)
			{
				cout << "No";
				return 0;
			}
		}
		cout << "Yes\n";
		for (int i = 0; i < k-1; ++i)
		{
			cout << tt[i] << " ";
		}
		cout << tt[k-1];
	}
	else cout << "No";
}
//solved on 2 oct 2019