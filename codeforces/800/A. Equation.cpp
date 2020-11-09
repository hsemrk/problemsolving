//https://codeforces.com/contest/1269/problem/A
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
	int n; cin>>n;
	if(n%2==0)cout<<n+4<<" 4";
	else
	{
		cout<<n+9<<" 9";
	}
}
//solved on 21 dec 2019
