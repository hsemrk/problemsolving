//https://codeforces.com/contest/1307/problem/B
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
        int n;ll x;cin>>n>>x;
        ll t[n];rd(t,n);
        sort(t,t+n);
        if(x%t[n-1]==0)cout<<x/t[n-1]<<"\n";
        else if(x<t[n-1])
        {
            bool test=true;
            for (int i = 0; i < n; i++)
            {
                if(t[i]==x)
                {
                    cout<<"1\n";
                    test=false;
                    break;
                }
            }
            if(test)cout<<"2\n";
        }
        else cout<<x/t[n-1] + 1<<"\n";
    }
}
//solved on 9 mar 2020
