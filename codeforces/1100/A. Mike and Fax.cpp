  
//https://codeforces.com/problemset/problem/548/A
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef double dd;
bool isPalindrome(string str){
    for(int i = 0; i <= str.length()-1; i++)
    {
        if(str[i] != str[str.length()-1-i])
            return false;
    }
    return true;
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	string ch;cin >> ch;
	int k;cin>>k;
	if(ch.length()%k!=0)cout << "NO";
	else
	{
		for (int i = 0; i < k; ++i)
		{
			string s="";
			for (int j = i*ch.length()/k; j < (i+1) * ch.length()/k; ++j)
                s+=ch[j];
			if (!isPalindrome(s))
			{
				cout << "NO";return 0;
			}
		}
		cout << "YES";
	}
}
//solved on 9 oct 2019