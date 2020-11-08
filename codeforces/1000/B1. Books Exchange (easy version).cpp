//https://codeforces.com/contest/1249/problem/B1
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
		int n;cin >> n;
		int p[n];
		for (int j = 0; j < n; j++)
		{
			cin>>p[j];
		}
		int count=1;
		for (int j = 0; j < n; j++)
		{
			int count=1;
			int pp=p[j];
			while (pp!=j+1)
			{
				pp=p[pp-1];count++;
			}
			cout << count << " ";
		}
		cout << "\n";
	}
	
}
//solved on 22 oct 2019
