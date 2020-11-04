//https://codeforces.com/contest/902/problem/A
//********Houssem Rekik********
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m;cin>> n >> m;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		int a,b;cin>>a>>b;
		if(a<=k)k = max(k,b);
	}
	if(k>=m)cout<<"YEs";
	else cout<<"NO";
}
//Solved on 20 Dec 2017
