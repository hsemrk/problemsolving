//https://codeforces.com/contest/1282/problem/A
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
       ll _a,_b,c,r;cin>>_a>>_b>>c>>r;
       ll a=min(_a,_b),b=max(_a,_b);
       cout<<min(max(c-a-r,(ll)0)+max(b-c-r,(ll)0),b-a)<<"\n";
    }
}
//solved on 24 dec 2019
