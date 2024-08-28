#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin >> str;

	int l = 0, r = str.length() - 1;

	bool isP = true;
	while (l <= r) {
		if (str[l++] != str[r--]) {
			isP = false;
		}
	}
	if (isP) {
		cout << "true";
	}
	else {
		cout << "false";
	}

}