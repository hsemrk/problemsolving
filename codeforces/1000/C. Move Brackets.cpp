//https://codeforces.com/contest/1374/problem/C
//*********Houssem Rekik*********
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define ll long long

int main()
{
    IOS;
    int t, n;
    string s;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        cin>>s;
        int x = 0;
        int o = 0;
        int c = 0;
        int m = s.length();
        for(int j = 0; j < m; j++){
           if (s[j] == '(') o++;
           else             c++;
           if (c == 1 && o == 1){
            c = 0;
            o = 0;
           }
           if (c > o){
                x++;
                c--;
           }
        }
        cout<<x<<endl;
    }
    return 0;
}
//solved on 28 jun 2020
