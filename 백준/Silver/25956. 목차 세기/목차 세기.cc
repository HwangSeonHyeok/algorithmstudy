
#include<iostream>
#include<stack>
#include<vector>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    stack<int> st;

    int n;
    cin >> n;
    vector<int> vec,ans;

    for(int i = 0; i<n; i++){
        int num;
        cin >> num;
        vec.push_back(num);
    }
    ans.push_back(0);
    st.push(vec[n-1]);
    for(int i = n-2; i>=0; i--){
        if(st.top()==vec[i]+1){
            int cnt = 0;
            while(!st.empty() && st.top()==vec[i]+1){
                st.pop();
                cnt++;
            }
            st.push(vec[i]);
            ans.push_back(cnt);

        }else if(st.top()>vec[i]+1){
            cout << -1;
            return 0;
        }else{
            st.push(vec[i]);
            ans.push_back(0);
        }

    }
    if(st.top()==1){
        for(int i = n-1;i>=0; i--){
            cout << ans[i] << '\n';
        }
    }else{
        cout << -1;
    }
	return 0;
}