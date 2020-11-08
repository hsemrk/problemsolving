  
//https://codeforces.com/contest/1214/problem/B
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef double dd;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	int b,g,n;cin>>b>>g>>n;
    int m=min(b,g), ma=max(b,g);
    if(m>=n)cout<<n+1;
    else if(ma>=n)cout<<m+1;
    else cout<<abs(n-ma-m)+1;
}
//solved on 10 oct 2019