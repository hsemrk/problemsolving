//https://codeforces.com/contest/1097/problem/B
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
    int n;cin>>n;
	int t[n];
	for (int i = 0; i < n; i++)cin>>t[i];
	int a;
	a=pow(2,n);
	for (int i = 0; i < a; i++)
	{
		bitset<15> b(i);
		int s=0;
		for (int j = 0; j < n; j++)
		{
			if(b[j]==0)s+=t[j];
			else s-=t[j];
		}
		if(s%360==0){cout<<"YES";return 0;}
	}
	cout<<"NO";
}
//solved on 28 oct 2019
