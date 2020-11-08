//https://codeforces.com/contest/1217/problem/B
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	int t,n;ll x;
	cin>>t;
	for (int j = 0; j < t; ++j)
	{
		cin>>n>>x;
		ll maxd=-1,g=0;
		for (int i = 0; i < n; ++i)
		{
			ll d,h ;cin >> d>>h;
			 	if (d>maxd)
			 		maxd=d;
			 	if (d-h>g)
			 		g=d-h;
		}
		if(maxd>=x) cout << "1\n";
		else if (g<=0) cout<<"-1\n";
		else if ((x-maxd)%g==0)cout << ((x-maxd)/g)+1<<"\n";
		else cout << ((x-maxd)/g)+2<<"\n";
	}
}
//solved on 20 oct 2019
