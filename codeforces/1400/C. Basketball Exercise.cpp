//https://codeforces.com/contest/1195/problem/C
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
	/*int q;cin>>q;
	while (q--)
	{
        ll a,b,c,n;cin>>a>>b>>c>>n;
    }*/
    int n;cin>>n;
    ll t1[n],t2[n];rd(t1,n);rd(t2,n);
    ll t[n][3];
    t[0][0]=t1[0];
    t[0][1]=t2[0];
    t[0][2]=0;
    for (int i = 1; i < n; i++)
    {
        //up
        t[i][0]=max(t[i-1][1],t[i-1][2])+t1[i];
        t[i][1]=max(t[i-1][0],t[i-1][2])+t2[i];
        t[i][2]=max(t[i-1][0],t[i-1][1]);
    }
    cout<<max(t[n-1][0],max(t[n-1][1],t[n-1][2]));
    
}
//solved on 12 fev 2020
