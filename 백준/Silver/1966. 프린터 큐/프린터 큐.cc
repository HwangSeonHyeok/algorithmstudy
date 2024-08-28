#include<iostream>
#include<algorithm>
#include <queue>
#include <vector>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}



int main(){
    int t, n, m;
    cin >> t;
    for(int i  = 0; i<t; i++){
        vector<int> vec;
        queue<int> q;
        int docs, c=0;
        cin >> n >> m;
        for(int j = 0; j<n;j++){
            cin >> docs;
            q.push(docs);
            vec.push_back(docs);    
        }
        sort(vec.begin(),vec.end(),cmp);
        for(int j = 0; j<n; j++){
            while(vec[j] != q.front()){
                q.push(q.front());
                q.pop();
                if(m==0){
                    m = q.size()-1;
                }
                else
                    m--;
            }
            q.pop();
            c++;
            if(m==0){
                break;
            }
            else
                m--;
        }
        cout<<c<<"\n";
        q=queue<int>();
        vec.clear();
        vector <int>().swap(vec);
    }

}