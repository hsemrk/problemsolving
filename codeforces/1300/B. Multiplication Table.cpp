  
//https://codeforces.com/problemset/problem/1220/B
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef double dd;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	int n;cin>>n;
	ll t[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> t[i][j];
		}
	}
	ll m1=t[1][0],m2=t[2][0],m3=t[1][2];
	ll a1; a1=sqrt((m1*m2)/m3);
	cout << a1 << " "<< m1/a1 << " " << m3*a1/m1<< " ";
	for (int i = 3; i < n-1; ++i)
	{
		cout << t[0][i]/a1 << " ";
	}
	if(n!=3)cout << t[0][n-1]/a1 <<"\n";
}
//solved on 9 oct 2019