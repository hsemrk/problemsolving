//https://codeforces.com/contest/1108/problem/C
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
typedef vector<int> vi ;
     
#define mp make_pair
#define pb push_back
#define rd(t,n) for (int i = 0; i < n; i++)cin>>t[i]
#define wr(t,n) for (int i = 0; i < n; i++)cout<<t[i]
#define bug cout<<"*"
#define mod 1000000007  //10 puis 9 +7
int main() 
{
	int n;cin>>n;char t[n];
    rd(t,n);
    if(n==1){cout<<"0\n"<<t[0];return 0;}
    if(n==2)
    {
        if(t[0]!=t[1]){cout<<"0\n"<<t[0]<<t[1]; return 0;}
        else
        {
            if(t[0]=='G')cout<<"1\n"<<t[0]<<'R';
            if(t[0]=='B')cout<<"1\n"<<t[0]<<'R';
            if(t[0]=='R')cout<<"1\n"<<t[0]<<'G';
            return 0;   
        }
    }
    char t1[n][6];
    t1[0][0]='R';t1[1][0]='B';t1[2][0]='G';
    t1[0][1]='R';t1[1][1]='G';t1[2][1]='B';
    t1[0][2]='B';t1[1][2]='R';t1[2][2]='G';
    t1[0][3]='B';t1[1][3]='G';t1[2][3]='R';
    t1[0][4]='G';t1[1][4]='R';t1[2][4]='B';
    t1[0][5]='G';t1[1][5]='B';t1[2][5]='R';
    for (int i = 3; i < n; i++)
    {
        for(int j=0;j<6;j++)t1[i][j]=t1[i-3][j];
    }
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
    for (int i = 0; i < n; i++)
    {
        if(t[i]!=t1[i][0])c1++;
        if(t[i]!=t1[i][1])c2++;
        if(t[i]!=t1[i][2])c3++;
        if(t[i]!=t1[i][3])c4++;
        if(t[i]!=t1[i][4])c5++;
        if(t[i]!=t1[i][5])c6++;
    }
    int m=min(min(c1,c2),min(min(c3,c4),min(c5,c6)));
    if(c1==m){cout<<m<<'\n';for (int i = 0; i < n; i++)cout<<t1[i][0];}
    else if(c2==m){cout<<m<<'\n';for (int i = 0; i < n; i++)cout<<t1[i][1];}
    else if(c3==m){cout<<m<<'\n';for (int i = 0; i < n; i++)cout<<t1[i][2];}
    else if(c4==m){cout<<m<<'\n';for (int i = 0; i < n; i++)cout<<t1[i][3];}
    else if(c5==m){cout<<m<<'\n';for (int i = 0; i < n; i++)cout<<t1[i][4];}
    else if(c6==m){cout<<m<<'\n';for (int i = 0; i < n; i++)cout<<t1[i][5];}
}
//solved on 23 nov 2019