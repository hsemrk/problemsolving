//https://codeforces.com/contest/1249/problem/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	int q;cin>>q;
	for (int i = 0; i < q; i++)
	{
		int n,res=0;cin >> n;
		set <int, greater <int> > s;int x;
		for (int j = 0; j < n; j++)
		{
			cin >> x;s.insert(x);
			if(s.count(x-1)||s.count(x+1))	{
				res++;
			}
		}
		if(res==0)cout<<"1\n";
		else cout << "2\n";
	}
}
//solved on 22 oct 2019
