//https://codeforces.com/contest/1097/problem/B
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	int n;cin>>n;
	ll t[n+1],tsum[n+1];t[0]=tsum[0]=0;
	for (ll i = 1; i < n+1; i++){cin>>t[i];tsum[i]=tsum[i-1]+t[i];}
	sort(t,t+n+1);
	ll ts[n+1];ts[0]=0;
	for (ll i = 1; i < n+1; i++){ts[i]=ts[i-1]+t[i];}
	int m;cin>>m;
	for (int i = 0; i < m; i++)
	{
		int type,l,r;cin>>type>>l>>r;
		if(type==1)cout<<tsum[r]-tsum[l-1]<<"\n";
		if(type==2)cout<<ts[r]-ts[l-1]<<"\n";
	}	
}
//solved on 28 oct 2019
