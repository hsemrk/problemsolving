//https://codeforces.com/problemset/problem/1245/B
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
	while(q--)
	{
		int n,a,b,c;cin>>n>>a>>b>>c;
        string s;cin>>s;
        int cnt=0;
        char t[n];memset(t,'0',sizeof(t));
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='R' && b!=0){t[i]='P';b--;cnt++;}
            if(s[i]=='P' && c!=0){t[i]='S';c--;cnt++;}
            if(s[i]=='S' && a!=0){t[i]='R';a--;cnt++;}
        }
        if(cnt<(n-n/2))cout<<"NO\n";
        else
        {
            for (int i = 0; i < n; i++)
            {
                if(t[i]=='0')
                {
                    if(a>0){t[i]='R';a--;}
                    else if(b>0){t[i]='P';b--;}
                    else if(c>0){t[i]='S';c--;}
                }
            }
            cout<<"YES\n";
            wr(t,n);
            cout<<'\n';
        }
	}
}
//solved on 21 mar 2020
