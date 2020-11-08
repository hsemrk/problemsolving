  
//https://codeforces.com/problemset/problem/287/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
int count(char l[4])
{
	int s=0;
	for (int i = 0; i < 4; ++i)
	{
		
		if (l[i]=='#')s+=1;
	}
	return s;
}
int main()
{
	string t[4];
	for (int i = 0; i < 4; ++i)
	{
		cin >> t[i];
	}
	int test=0;
	char l[4];
	l[0]=t[0][0],l[1]=t[0][1],l[2]=t[1][0],l[3]=t[1][1];
	if ((count(l)!=2) && test==0)test=1;
	l[0]=t[0][1],l[1]=t[0][2],l[2]=t[1][1],l[3]=t[1][2];
	if ((count(l)!=2) && test==0)test=1;
	l[0]=t[0][2],l[1]=t[0][3],l[2]=t[1][2],l[3]=t[1][3];
	if ((count(l)!=2) && test==0)test=1;
	//-----
	l[0]=t[1][0],l[1]=t[1][1],l[2]=t[2][0],l[3]=t[2][1];
	if ((count(l)!=2) && test==0)test=1;
	l[0]=t[1][1],l[1]=t[1][2],l[2]=t[2][1],l[3]=t[2][2];
	if ((count(l)!=2) && test==0)test=1;
	l[0]=t[1][2],l[1]=t[1][3],l[2]=t[2][2],l[3]=t[2][3];
	if ((count(l)!=2) && test==0)test=1;
	//-----
	l[0]=t[2][0],l[1]=t[2][1],l[2]=t[3][0],l[3]=t[3][1];
	if ((count(l)!=2) && test==0)test=1;
	l[0]=t[2][1],l[1]=t[2][2],l[2]=t[3][1],l[3]=t[3][2];
	if ((count(l)!=2) && test==0)test=1;
	l[0]=t[2][2],l[1]=t[2][3],l[2]=t[3][2],l[3]=t[3][3];
	if ((count(l)!=2) && test==0)test=1;
	//--
	if (test)cout << "YES";
	else cout << "NO";
}
 
//solved on 27 sep 2019