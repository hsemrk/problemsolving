//https://codeforces.com/problemset/problem/312/B
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
    float a,b,c,d;cin>>a>>b>>c>>d;
    cout<<setprecision(7)<< a/(b-b*(1-a/b)*(1-c/d));

}
//solved on 8 nov 2019
