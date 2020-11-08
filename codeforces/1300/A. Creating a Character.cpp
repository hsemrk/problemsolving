//https://codeforces.com/contest/1217/problem/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	int t,a,b,c;
	cin>>t;
	for (int j = 0; j < t; ++j)
	{
		cin>>a>>b>>c;
		if (c==0 && a>b)
		{
			cout << "1\n";
		}
		else if ((b+c)<a)cout<<c+1<<"\n";
		else cout << max(0,(a-b+c+1)/2)<<"\n";
	}
}
//solved on 20 oct 2019
