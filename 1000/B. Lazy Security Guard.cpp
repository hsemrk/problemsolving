//https://codeforces.com/contest/859/problem/B
//*******Houssem Rekik********
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
	long long int a,i=0,x,y;
	float b;
	cin >> x ;
	a = ceil(sqrt(x));
	b = (float)x/a;
	cout << ( a + ceil(b) )* 2;
} 
//Solved on 16 sep 2017
