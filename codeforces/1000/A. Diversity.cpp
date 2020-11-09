//https://codeforces.com/problemset/problem/844/A
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
	string s;int k;
	cin>>s>>k;
	if(s.length()<k)cout<<"impossible";
	else
	{
		set<char> st;
		int count=0;
		for (int i = 0; i < s.length(); i++)
		{
			if(st.count(s[i]))count++;
			else st.insert(s[i]);
		}
		if(s.length()-count>=k)cout << 0;
		else cout<< k-s.length()+count;
	}
}
//solved on 6 dec 2019