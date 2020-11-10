//https://codeforces.com/problemset/problem/182/D
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
typedef vector<int> vi ;
     
#define mp make_pair
#define pb push_back
#define rd(t,n) for (int i = 0; i < n; i++)cin>>t[i]
#define wr(t,n) for (int i = 0; i < n; i++)cout<<t[i]<<" "
#define bug cout<<"*"
#define mod 1000000007  //10 puis 9 +7

int GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}


int main() 
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string ch1,ch2;cin>>ch1>>ch2;
	string small,big;
	if(ch1.length() > ch2.length()){small=ch2;big=ch1;}
	else {small=ch1;big=ch2;}
	int s= small.length(), b = big.length();
	int gcd = GCD(s,b);
	for (int l = 1; l <= gcd; l++)
	{
		if(s%l==0 && b%l==0)
		{
			bool test = true;
			string div = small.substr(0,l);
			for (int i = 0; i < s; i+=l)
			{
				if(small.compare(i,l,div)!=0 || big.compare(i,l,div)!=0){test=false;break;}
			}
			if(test)
			{
				for (int i = 0; i < b; i+=l)
				{
					if(big.compare(i,l,div)!=0){test=false;break;}
				}
				if(test)
				{
					int count = 0;
					for (int i = 0; i < s/l; i++)
					{
						if(s%(l+i*l)==0 && b%(l+i*l)==0)count++;
					}
					cout<<count;
					return 0;
				}
			}
		}
	}
	cout<<0;
}
//solved on 4 nov 2020
