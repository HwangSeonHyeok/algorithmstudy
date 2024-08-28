#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, notC = 1, ans;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 'C')
        {
            notC++;
        }
    }
    ans = n / notC;
    cout << ans;
}