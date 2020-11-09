//https://codeforces.com/contest/535/problem/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
typedef vector<int> vi ;
     
#define mp make_pair
#define pb push_back
#define rd(t,n) for (int i = 0; i < n; i++)cin>>t[i]
#define wr(t,n) for (int i = 0; i < n; i++)cout<<t[i]<<"*"
#define bug cout<<"*"
#define mod 1000000007  //10 puis 9 +7

int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;cin>>n;
	string l[20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten",
    "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};

    string x[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    string y[10]={0,0,"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    if(n<20)cout<<l[n];
    else cout<<y[n/10]<<"-"<<x[n%10];
}
//solved on 22 nov 2019
