#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n;i++) {
        string str;
        cin >> str;
        if (str.length() >= 6 && str.length() <= 9) {
            cout << "yes" << '\n';
        }
        else {
            cout << "no" << '\n';
        }
    }
}
