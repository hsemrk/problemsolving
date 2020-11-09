//https://codeforces.com/problemset/problem/194/B
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

ll lcm(ll a, ll b)  
 {  
    return (a*b)/__gcd(a, b);  
 }  

int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;cin>>n;ll x;
	for (int i = 0; i < n; i++)
	{
		cin>>x;
		if(x%2==0)cout<<4*x+1<<"\n";
		else cout<<lcm(4*x,x+1)/(x+1)+1<<"\n";
	}
	
}
//solved on 6 dec 2019