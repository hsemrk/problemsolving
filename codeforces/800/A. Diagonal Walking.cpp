  
//https://codeforces.com/problemset/problem/954/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	int n;cin>>n;
	string ch;cin >>ch;
	int i=0;
	int c1=n,c2=n;
	while(i<n-1)
	{
		if (ch[i]==ch[i+1])i++;
		else
		{
			c1-=1;
			i+=2;
		}
	}
	i=n-1;
	while(i>0)
	{
		if (ch[i]==ch[i-1])i--;
		else
		{
			c2-=1;
			i-=2;
		}
	}
	cout << min(c1,c2) <<'\n';
}

//solved on 2 oct 2019