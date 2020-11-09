//https://codeforces.com/contest/1263/problem/B
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
	int q;cin>>q;
	while (q--)
	{
		int n;cin>>n;
		string t[n];
		set <int> s1;
		for (int i = 0; i < n; i++)
		{
			cin>>t[i];
			s1.insert(t[i][0]-'0');
		}
		int i=0,j=1,cnt=0;
		while (i<n-1)
		{
			if(t[i]==t[j])
			{
				for (int k = 0; k < 10; k++)
				{
					if(!s1.count(k))
					{
						t[i][0]='0'+k;
						s1.insert(k);
						break;
					}
				}
				i++;j=i+1;cnt++;
			}
			else
			{
				j++;
				if(j==n){i++;j=i+1;}
			}
		}
		cout<<cnt<<"\n";
		wr(t,n);
	}
}
//solved on 11 dec 2019