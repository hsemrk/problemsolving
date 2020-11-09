//https://codeforces.com/contest/1282/problem/B1
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
	while (q--)
	{
       int n;ll p;int k;cin>>n>>p>>k;
       int t[n];
       rd(t,n);
       sort(t,t+n);
       ll s=0;int ind1;
       for (int i = 0; i < n ; i+=k)
       {
           if(s+t[i]<=p)s+=t[i];
           else {ind1=i-2;break;}
           ind1=i;
       }
       s=0;int ind2;
       for (int j = 1; j < n; j+=k)
       {
           if(s+t[j]<=p)s+=t[j];
           else {ind2=j-2;break;}
           ind2=j;
       }
       cout<<max(max(0,ind1+1),ind2+1)<<"\n";
    }
}
//solved on 24 dec 2019
