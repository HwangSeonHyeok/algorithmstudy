#include <iostream>
#include <vector>
#include<cstring>
#define mod 1000000009

using namespace std;
int dp[1000001] = { 0, };

int main()
{
	int t;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int j = 4; j <= 1000000; j++) {
		dp[j] = ((dp[j - 1] + dp[j - 2]) % mod + dp[j - 3]) % mod;
	}
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		cout << dp[n] << '\n';
	}
}

