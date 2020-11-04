//https://codeforces.com/contest/810/problem/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int n,k,l,s=0;
	cin >> n >> k ;
	for (int i = 0; i < n; i++)
	{
		cin >> l; s+=l;
	}
	int count =n ; 
	float av; 
	av = (float)s/n;
	while( round(av) < k)
	{
		s+=k;n++;
		av = ((double)s/n);
	}
	cout << n - count ; 
}
//solved on 20 May 2017
