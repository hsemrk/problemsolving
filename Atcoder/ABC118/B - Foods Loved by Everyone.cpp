//https://atcoder.jp/contests/abc118/tasks/abc118_b
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 

int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m;cin>>n>>m;
	int t[m+1];memset(t,0,sizeof(t));
	for (int i = 0; i < n; i++)
	{
		int k;cin>>k;
		while(k--)
		{
			int x;cin>>x;
			t[x]++;
		}
	}
	int s=0;
	for (int i = 1; i <= m; i++)
	{
		if(t[i]==n)s++;
	}
	cout<<s;
}
//solved on 5 Aug 2020