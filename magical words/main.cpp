#include<bits/stdc++.h>

// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/magical-word/ 

using namespace std;

int prime[12] = {67, 71, 73, 79, 83, 89,97, 101, 103, 107, 109, 113};

char nearest(char c)
{
	int temp = (int)c;
	for(int i=0;i<11;i++)
	{
		if(c==prime[i])
			return prime[i];
		if(c<=67)
			return 67;
		if(c>=113)
			return 113;
		if(c>prime[i]&&c<prime[i+1])
		{
			int f = c - prime[i];
			int s = prime[i+1] - c;
			
			return (f<=s)?prime[i]:prime[i+1];
 		}
	}	
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","rt",stdin);
		freopen("output.txt","wt",stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		string s;
		int n;
		cin>>n;
		cin>>s;
		for(int i = 0;i<s.length();i++)
		{
			//cout<<(int)nearest(s[i])<<" ";
			cout<<nearest(s[i]);
		}
		cout<<"\n";
	}
}