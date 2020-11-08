//https://codeforces.com/problemset/problem/520/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
    int n;cin >>n;
    if(n<26)cout<<"NO";
    else
    {
        char t[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        string ch;cin>> ch;bool test=false;
        for (int i = 0; i < n; i++)ch[i]=tolower(ch[i]);
        for (int i = 0; i < 26; i++)
        {
            bool test=false;
            for (int j = 0; j < n; j++)
            {
                if(ch[j]==t[i]){test=true;break;}
            }
            if(!test){cout<<"NO";return 0;}
            
        }
        cout<<"YES";
    }
}
//solved on 25 oct 2019