  
//https://codeforces.com/problemset/problem/1076/C
//*********Houssem Rekik*********
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
typedef double dd;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
	int n;cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int d;cin>>d;
		if(d==0)cout << "Y " << "0.000000000 0.000000000\n";
		else if(d<4) cout << "N\n";
		else
		{
            double delta;delta=d*(d-4);
            double a=(sqrt(delta)+d)/2;
            if (a<0)
            {
                cout << "N\n";
            }
            else
            {
                cout << fixed;
                cout << "Y "<< setprecision(11) << a << " " << setprecision(11)<<d/a<< "\n"; 
            }
	    }
	}
}
 
//solved on 9 oct 2019