//https://codeforces.com/contest/810/problem/B
//******Houssem Rekik********
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int n,f,l,k;
	cin >> n >> f ; ii t[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> t[i].first >> t[i].second; 
	}
	sort(t,t+n, [] (ii a , ii b) {return min(2*a.first,a.second)-min(a.first,a.second) > min(2*b.first,b.second) -min(b.first,b.second) ;});
  long long s=0;
  for (int i = 0; i < n; ++i)
  {
    ii a=t[i];
    if(i<f)s+= min(2*a.first,a.second);
    else s+= min(a.first,a.second);
  }
  cout << s ; 
}
//Solved on 21 May 2017
