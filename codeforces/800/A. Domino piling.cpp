//https://codeforces.com/problemset/problem/50/A
//*******Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m;cin>>n>>m;
	if((n*m)%2==0)cout<<n*m/2;
	if((n*m)%2==1)cout<<(n*m-1)/2;
}
//Solved on 29 october 2020
