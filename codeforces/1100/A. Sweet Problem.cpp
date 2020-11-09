//https://codeforces.com/contest/1263/problem/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
typedef vector<int> vi ;
     
#define mp make_pair
#define pb push_back
#define rd(t,n) for (int i = 0; i < n; i++)cin>>t[i]
#define wr(t,n) for (int i = 0; i < n; i++)cout<<t[i]
#define bug cout<<"*"
#define mod 1000000007  //10 puis 9 +7
int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int q;cin>>q;
    for (int i=0;i<q;i++)
    {
        int a,b,c,x,y,z;cin>>a>>b>>c;
        if((a>=b)&&(a>=c)){x=a;y=b;z=c;}
        else if((c>=b)&&(c>=a)){x=c;y=b;z=a;}
        else if((b>=a)&&(b>=c)){x=b;y=c;z=a;}
        if (y+z>x){int res=(y+z-x)/2;
            y-=(y+z-x)/2;z-=(y+z-x)/2;
        res+=x;
        cout<<res<<'\n';}
        else {cout<<y+z<<'\n';}
    }
    
}
//solved on 27 nov 2019