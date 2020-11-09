//https://codeforces.com/contest/1253/problem/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
typedef vector<int> vi ;
     
#define mp make_pair
#define pb push_back
#define rd(t,n) for (int i = 0; i < n; i++)cin>>t[i]
#define wr(t,n) for (int i = 0; i < n; i++)cout<<t[i]<<"*";
#define bug cout<<"*"
//#define readt(int t[],int n)  for (int i = 0; i < n; i++)cin>>t[i];
ll mod=1000000007;


int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n],b[n];
		rd(a,n);
		rd(b,n);
		int i=0;
		while (i<n && a[i]==b[i])
		{
			i++;
		}
		if(i!=n)
		{
			int l=i,r;
			i=n-1;
			while (i>l && a[i]==b[i])
		    {
			    i--;
		    }
			r=i;
            i=l+1;
			int dif=b[l]-a[l];
			if(dif<=0)cout<<"NO\n";
			else
			{
				while(i<r+1 && b[i]-a[i]==dif)
			    {
				  i++;
			    }
			    if(i==r+1)cout<<"YES\n";
			    else cout << "NO\n";
	        }
			
		}
		else cout<<"YES\n";
		
	}
}
//solved on 16 nov 2019
