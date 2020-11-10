//https://codeforces.com/contest/1375/problem/B
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

void cons(int n,int m)
{
	cout << "2 ";
	for (int j = 1; j < m-1; j++)cout<<"3 ";
	cout << "2\n";
	for (int i = 1; i < n-1; i++)
	{
		cout << "3 ";
		for (int j = 1; j < m-1; j++)cout<<"4 ";
		cout << "3\n";	
	}
	cout << "2 ";
	for (int j = 1; j < m-1; j++)cout<<"3 ";
	cout << "2\n";
}
int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int q;cin>>q;
	while(q--)
	{
		int n,m;cin>>n>>m;
		ll t[n][m];
		bool b =true;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin>>t[i][j];
				if(t[i][j]>4)b=false;
			}
		}
		if(b)
		{
			if(t[0][0] >2 || t[n-1][0]>2 ||t[0][m-1]>2 || t[n-1][m-1]>2)b=false;
			for (int j = 1; j < m-1; j++)
			{
				if(t[0][j]>3){b=false;break;}
				if(t[n-1][j]>3){b=false;break;}	
			}
			for (int j = 1; j < n-1; j++)
			{
				if(t[j][0]>3){b=false;break;}
				if(t[j][m-1]>3){b=false;break;}	
			}
		}
		if(b){cout<<"YES\n";cons(n,m);}
		else cout<<"NO\n";
	}
}
//solved on 4 jul 2020
