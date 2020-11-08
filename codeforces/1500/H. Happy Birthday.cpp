//https://codeforces.com/contest/1250/problem/H
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
    int n;cin>>n;
	for (int j = 0; j < n; j++)
	{
		int mino=pow(10,6)+1,nb=0,nb0;
		cin>>nb0;ll x;bool test=true;
		for (int i = 1; i <= 9; i++)
		{
			cin>>x;
			if(x==0 && test){cout<<i<<"\n";test=false;}
			else if(x<mino){mino=x;nb=i;}
		}
		if(test)
		{
			
			string ch;
			if(nb0>=mino)
			{
				for (int i = 0; i <=mino; i++)
				{
					ch+=to_string(nb);
				}
				cout<<ch<<'\n';
			}
			else
			{
				ch=to_string(1);
				for (int i = 0; i <=nb0; i++)
				{
					ch+=to_string(0);
				}
				if(nb0!=0)cout<<ch<<'\n';
				else cout << 10<<'\n';
			}
		}
	}
}
//solved on 28 oct 2019
