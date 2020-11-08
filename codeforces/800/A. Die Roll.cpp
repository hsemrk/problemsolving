  
//https://codeforces.com/problemset/problem/9/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	int y,w;
	cin >> y >> w;
	int p=6-max(y,w)+1;
	if (p%2==0)
	 {
	 	if (p%3==0)		
	 	{
	 		cout << "1/1\n";
	 	}
	 	else 
	 	{
	 		cout << to_string(p/2)+"/3\n";
	 	}
	 } 
	 else
	 {
	 	if (p%3==0)
	 	{
	 		cout << to_string(p/3)+"/2\n";
	 	}
	 	else cout << to_string(p)+"/6\n";
	 }


}
//solved on 9 oct 2019