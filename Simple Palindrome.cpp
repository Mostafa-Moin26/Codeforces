// Problem link ---->
https://codeforces.com/contest/2005/problem/A

// Solution ---->
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string v="aeiou",res="";
		for(int i=0;i<n;i++)
		{
			res+=v[(i*5)/n];
		}
		cout<<res<<endl;
	}
}