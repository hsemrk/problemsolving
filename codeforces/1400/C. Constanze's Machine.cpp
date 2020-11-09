//https://codeforces.com/contest/1245/problem/C
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
typedef vector<int> vi ;
     
#define mp make_pair
#define pb push_back
#define rd(t,n) for (int i = 0; i < n; i++)cin>>t[i]
#define wr(t,n) for (int i = 0; i < n; i++)cout<<t[i]<<"*";
#define bug cout<<"*"
//#define readt(int t[],int n)  for (int i = 0; i < n; i++)cin>>t[i];
ll mod=1000000007;
ll fib(int n) 
{ 
  /* Declare an array to store Fibonacci numbers. */
  ll f[n+2];   // 1 extra to handle case, n = 0 
  int i; 
  
  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      /* Add the previous 2 numbers in the series 
         and store it */
      f[i] = f[i-1]%mod + f[i-2]%mod; 
	  f[i]%=mod;
  } 
  
  return f[n]; 
} 

int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	cin>>s;
	int cnt=0;ll sum=1;
	int i=0;
	while (i<s.length())
	{
		if(s[i]=='m'|| s[i]=='w'){sum=0;break;}
		while(s[i]=='n'){cnt++;i++;}
		sum*=fib(cnt+1);
		sum%=mod;cnt=0;
		while(s[i]=='u'){cnt++;i++;}
		sum*=fib(cnt+1);
		sum%=mod;cnt=0;
		if(s[i]!='u' && s[i]!='n')i++;
	}
	cout <<sum;
}
//solved on 16 nov 2019
