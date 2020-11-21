//https://atcoder.jp/contests/abc117/tasks/abc117_b
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 

int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,s=0,m=0;cin>>n;
  	for (int i = 0; i < n; i++)
	{
		int x;cin>>x;
		if(m<x)m=x;
		s+=x;
	}
	if(m < s-m)cout<<"Yes";
	else cout<<"No";
}
//solved on 5 Aug 2020
