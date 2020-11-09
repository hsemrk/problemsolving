//https://codeforces.com/contest/835/problem/B
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
    ll t[10]={0,0,0,0,0,0,0,0,0,0};
    ll k;cin>>k;
    string s;cin>>s;
    ll sum=0;
    for (int i = 0; i < s.length(); i++)
    {
        sum+=s[i]-'0';
        t[s[i]-'0']++;
    }
    //wr(t,10);
    int i=0;ll x=0;
    while (i<9 && sum<k)
    {
        if((k-sum)%(9-i)!=0)
        {
            x+=min(t[i],(k-sum)/(9-i)+1);
            sum+=min(t[i],(k-sum)/(9-i)+1)*(9-i);
        }
        else
        {
            x+=min(t[i],(k-sum)/(9-i));
            sum+=min(t[i],(k-sum)/(9-i))*(9-i);
        }
        i++;
    }
    cout<<x;
}
//solved on 28 jan 2020
