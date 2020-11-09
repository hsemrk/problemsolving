//https://codeforces.com/contest/1287/problem/A
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
        int n;cin>>n;
        string s;
        cin>>s;
        int i=0;
        while(i<n && s[i]!='A')i++;
        while(i<n && s[i]=='A')i++;
        int cnt=0,mx=0;
        while(i<n)
        {
            while (s[i]=='P'){cnt++;i++;}
            mx=max(mx,cnt);
            cnt=0;
            i++;
        }
        cout<<mx<<"\n";
    }
}
//solved on 5 jan 2020
