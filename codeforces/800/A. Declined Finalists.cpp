//https://codeforces.com/contest/859/problem/A
//*********Houssem Rekik********
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);
	int k;long long int r=0,x;
	cin >> k ;
	x=r;
	for (int i = 0; i <k; ++i)
	{
		cin >> r ;
		if(r>x)x=r;
	}
	if (x>25) cout << x-25 ;
	else cout << 0;

}
//Solved on 16 sep 2017
