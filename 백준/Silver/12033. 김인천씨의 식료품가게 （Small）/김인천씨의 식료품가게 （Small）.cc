#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;




int main()
{

	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n;
		unordered_map<int, int> m;
		vector<int> vec,ans;
		cin >> n;
		for (int j = 0; j < 2 * n; j++) {
			int price;
			cin >> price;
			m[price]++;
			vec.push_back(price);
		}
		for (int j = 0; j < 2 * n; j++) {
			int price = vec[j];
			int cnt = m[price];
			
			if (cnt!=0&&price % 4 == 0) {
				int discount = (price / 4) * 3;
				if (m.find(discount) != m.end()&&m[discount]>0) {
					ans.push_back(discount);
					m[price]--;
					m[discount]--;
				}
			}
		}
		

		cout << "Case #" << i << ":" << " ";
		for (int j = 0; j < n; j++) {
			cout << ans[j] << " ";
		}
		cout << '\n';
	}
	
}

