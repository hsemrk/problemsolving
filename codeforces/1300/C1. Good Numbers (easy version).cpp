//https://codeforces.com/contest/1249/problem/C1
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
bool isgood(int n)
{
    if(n==1)return true;
    if(n%3==1)return isgood(n-1);
    if(n%3==0)return isgood(n/3);
    else return false;
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
    int q;cin>>q;
    for (int j = 0; j < q; j++)
    {
        int n;cin>>n;
        for (int  i = n; i < 20001; i++)
        {
            if(isgood(i)){cout << i << "\n";break;}
        }
    }
}
//solved on 22 oct 2019
