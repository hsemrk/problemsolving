//https://codeforces.com/contest/1374/problem/B
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
typedef vector<int> vi ;
     
#define mp make_pair
#define pb push_back
#define rd(t,n) for (int i = 0; i < n; i++)cin>>t[i]
#define wr(t,n) for (int i = 0; i < n; i++)cout<<t[i]<<" "
#define bug cout<<"*"
#define mod 1000000007  //10 puis 9 +7

int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int q;cin>>q;
	while(q--)
	{
		ll n; cin>>n;
		int count =0;
		while(n>1)
		{
			if(n%6!=0)
			{
				if(2*n % 6==0)
				{
					count+=2;
					n=(2*n)/6;
				}
				else
				{
					cout<<"-1\n";
					break;
				}
			}
			else{
				count++;
				n/=6;
			}
		}
		if(n==1)cout<<count<<"\n";
	}	
}
//solved on 28 jun 2020
