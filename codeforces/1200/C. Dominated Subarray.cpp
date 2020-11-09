//https://codeforces.com/contest/1257/problem/C
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
     
#define mp make_pair
#define pb push_back

int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;cin>>t;
	for(int i=0;i<t;i++)
    {
		int n;cin>>n;
		int size=n+1;
		int a[n],occ[n],cnt[n];
		if(n==1){int x;cin>>x;cout<<"-1\n";}
		else
		{
			for(int j=0;j<n;j++){cin>>a[j];occ[j]=-1;cnt[j]=n+1;}
			for(int j=0;j<n;j++)
			{
				if (occ[a[j]-1]==-1)occ[a[j]-1]=j;
				else 
				{
					cnt[j]=min(cnt[j],j-occ[a[j]-1]+1);
					occ[a[j]-1]=j;
					size=min(size,cnt[j]); 
				} 
			} 
			if (size<=1 || size==n+1){cout<<-1<<"\n";}
			else cout<<size<<"\n";
		}
	}
}
//solved on 13 nov 2019
