//https://codeforces.com/problemset/problem/734/A
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
	int n;;cin>>n;
	string s;cin>>s;
	int a=0,d=0;
	for (int i = 0; i < n; i++)
	{
		if(s[i]=='A')a++;
		if(s[i]=='D')d++;
	}
	if(a>d)cout<<"Anton";
	if(a<d)cout<<"Danik";
	if(a==d)cout<<"Friendship";
}
//solved on 23 oct 2020
