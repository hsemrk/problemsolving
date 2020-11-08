  
//https://codeforces.com/problemset/problem/157/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
long long t[30][30];
long long suml(int l,int n)
{
	long long s=0;
	for (int i = 0; i < n; ++i)
	{
		s+=t[l][i];
	}
	return s;
}
long long sumc(int c,int n)
{
	long long s=0;
	for (int i = 0; i < n; ++i)
	{
		s+=t[i][c];
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> t[i][j];
		}
	}
	int count=0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (suml(i,n)<sumc(j,n))count++;
		}
	}
	cout << count << '\n';
}
//solved on 25 sep 2019