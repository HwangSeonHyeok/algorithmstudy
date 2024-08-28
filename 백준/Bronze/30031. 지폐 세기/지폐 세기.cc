
#include <iostream>
using namespace std;

int main()
{
	int n, sum=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int height, width;
		cin >> height >> width;
		if (height == 136) {
			sum += 1000;

		}else if (height == 142) {
			sum += 5000;

		}else if (height == 148) {
			sum += 10000;

		}else if (height == 154) {
			sum += 50000;

		}
	}
	cout << sum;

}

