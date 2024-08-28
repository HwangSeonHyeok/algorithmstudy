#include <iostream>
#include <vector>
#define mod 1000000007
using namespace std;

int main()
{
	long long a, x, ans = 1;
	vector<long long> vec;
	cin >> a >> x;
	long long tmpA = a, tmpX = x;
	while (tmpX > 0) {
		if (tmpX % 2 == 1) {
			vec.push_back(tmpA);
		}
		tmpA = ((tmpA%mod)*(tmpA%mod)) % mod;
		tmpX /= 2;
	}
	for (int i = 0; i < vec.size(); i++) {
		ans =(((ans%mod)*(vec[i]%mod))%mod);
	}
	cout << ans;
}

