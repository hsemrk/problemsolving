//https://codeforces.com/contest/1140/problem/D
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
    int n;cin>>n;
    int t[n+1];t[3]=6;
    for(int i =4; i <= n ; i++)
    {
        t[i]=i*(i-1)+t[i-1];
    }
    cout<< t[n];
}
//solved on 12 fev 2020
