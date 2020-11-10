//https://codeforces.com/problemset/problem/525/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
typedef vector<int> vi ;
     
#define mp make_pair
#define pb push_back
#define rd(t,n) for (int i = 0; i < n; i++)cin>>t[i]
#define wr(t,n) for (int i = 0; i < n; i++)cout<<t[i]<<"\n"
#define bug cout<<"*"
#define mod 1000000007  //10 puis 9 +7

ll fac(int x) 
{ 
    ll y=1;
	for (int i = 2; i <= x; i++)
	{
		y*=i;
	}
	return y;
	 
} 
int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;cin>>n;
	string ch;cin>>ch;
	map <char,int> m;
	int count = 0;
	for (int i = 0; i < 2*n-2; i+=2)
	{
		if(m.count(ch[i])!=0)m[ch[i]]+=1;
		else m[ch[i]]=1;
		if(m.count(tolower(ch[i+1]))==0 || m[tolower(ch[i+1])]==0)count++;
		else m[tolower(ch[i+1])]--;	
	}
	cout<<count;
}
//solved on 4 nov 2020
