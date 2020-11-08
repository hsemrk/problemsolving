  
//https://codeforces.com/problemset/problem/1005/B
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
int main()
{
	string c1,c2;
	getline(cin,c1);
	getline(cin,c2);
	int count=0;
	for (int i =0; i<min(c1.length(),c2.length()); i++)
	{
		if (c1[c1.length()-i-1]==c2[c2.length()-1-i])count++;
		else break;
	}
 
	cout<< c1.length()+ c2.length()-2*count<< '\n';
}
//solved on 25 sep 2019