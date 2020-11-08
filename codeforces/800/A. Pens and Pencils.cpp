  
//https://codeforces.com/contest/1244/problem/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	int t;cin>>t;
	for (int i = 0; i < t; ++i)
	{
	int a,b,c,d,k;cin>>a>>b>>c>>d>>k;
	int pen,pencil;
	if (a%c !=0)pen=a/c+1;
	else pen =a/c;
	if (b%d !=0)pencil=b/d+1;
	else pencil=b/d;
	if(pen+pencil<=k)cout<<pen<<" "<<pencil<<"\n";
	else cout<<"-1\n";
	}
}
//solved on 13 oct 2019