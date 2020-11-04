//https://codeforces.com/contest/810/problem/C
//********Housem Rekik*********
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	long long n,l,s=0,m=1e9+7;
	cin >> n ;
	vector<long long> v ; 
	for (long long i = 0; i < n; ++i)
	{
		cin >> l;v.push_back(l); 
	}
	sort(v.begin(),v.end());
	long long int p=1;
	for (int  i = 0; i < n; ++i)
	{
		s=(s+((v[i] % m)*p)) % m;
		p=(p*2) % m;
	}
	p=1;
	for (int i = n-1; i >= 0; --i)
	{
		s=((s-((v[i]% m)*p))+m) % m;
		
		p=(p*2) % m;
	}
	s=((s%m)+m)%m;
	cout << s ;
}
//Solved on 21 May 2020
