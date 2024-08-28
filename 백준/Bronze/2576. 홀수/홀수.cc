#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int sum = 0, min = 1e9;
    vector<int> odd;
    for (int i = 0; i < 7; i++)
    {
        int num;
        cin >> num;
        if (num % 2 == 1)
        {
            sum += num;
            odd.push_back(num);
        }
    }
    if (odd.size() == 0)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < odd.size(); i++)
        {
            if (min > odd[i])
            {
                min = odd[i];
            }
        }

        cout << sum << '\n';
        cout << min;
    }
}
