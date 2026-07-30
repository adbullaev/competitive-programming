#include <bits/stdc++.h>
using namespace std;
 
long long n,x;
 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> x;
	
	vector<long long> h(n);
	vector<long long> s(n);
	
	for(long long i = 0;i<n;i++) cin >> h[i];
	for(long long i = 0;i<n;i++) cin >> s[i];
	
	vector<long long> dp(x+1,0);
	dp[0] = 0;
	for(long long j = 0;j<n;j++)
	{
	    for(long long i = x;i>=h[j];i--)
	    {
	        dp[i] = max(dp[i-h[j]]+s[j],dp[i]);
	    }
	}
	
	cout << dp[x]; 
 
	return 0;
}