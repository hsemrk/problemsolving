//https://codeforces.com/contest/1251/problem/C
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef vector<ll> vl ;
typedef vector<int> vi ;  
#define mp make_pair
#define pb push_back
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        int p=0,i=0; 
        while(p<s.length() && (s[p]-'0')%2!=0)p++; 
        while(i<s.length() && (s[i]-'0')%2==0)i++;  
        while(i<s.length() && p<s.length())
        {
            if(s[i]>s[p])
            {
                cout<<s[p];p++;
                while(p<s.length() && (s[p]-'0')%2!=0)p++; 
            }
            else
            {
                cout<<s[i];i++;
                while(i<s.length() && (s[i]-'0')%2==0)i++;  
            }
            
        }
        while(p<s.length())
        {
            cout<<s[p];p++;
            while(p<s.length() && (s[p]-'0')%2!=0)p++; 
        }
        while(i<s.length())
        {
            cout<<s[i];i++;
            while(i<s.length() && (s[i]-'0')%2==0)i++;  
        } 
        cout<<"\n";
    }
	
}
//solved on 12 nov 2019
