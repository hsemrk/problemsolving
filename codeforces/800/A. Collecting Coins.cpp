//https://codeforces.com/contest/1294/problem/A
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
        ll a,b,c,n;cin>>a>>b>>c>>n;
        ll Mx=max(a,max(b,c));
        ll Mn=min(a,min(b,c));
        ll M=a+b+c-Mx-Mn;
        ll X=n-((Mx-M) + (Mx-Mn));
        if( X>=0 && X%3==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
//solved on 28 jan 2020
