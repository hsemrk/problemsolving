//https://codeforces.com/problemset/problem/298/B
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
typedef vector<int> vi ;
     
#define mp make_pair
#define pb push_back
#define rd(t,n) for (int i = 0; i < n; i++)cin>>t[i]
#define wr(t,n) for (int i = 0; i < n; i++)cout<<t[i]<<"\n"
#define bug cout<<"*"
#define mod 1000000007  //10 puis 9 +7
int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;ll sx,sy,ex,ey;
	cin>>t>>sx>>sy>>ex>>ey;
	string s;cin>>s;
	int i=0;
	for (i = 0; i < t; i++)
	{
		if (ex==sx && ey==sy)break;
		if(s[i]=='S' && ey<sy)sy--;
		if(s[i]=='N'&& ey>sy)sy++;
		if(s[i]=='E'&& ex>sx)sx++;
		if(s[i]=='W'&& ex<sx)sx--;
	}
	if(ex==sx && ey==sy)cout<<i;
	else cout<<-1;
}
//solved on 17 mar 2020
