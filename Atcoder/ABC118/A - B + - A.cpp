//https://atcoder.jp/contests/abc118/tasks/abc118_a
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 

int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m;cin>>n>>m;
	if(m%n==0)cout<<m+n;
	else cout<< m-n;
}
//solved on 5 Aug 2020
