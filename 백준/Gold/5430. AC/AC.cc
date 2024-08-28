#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n;
    string str, arr;
    cin >> t;
    for(int i = 0; i<t; i++){
        bool error = false;
        deque<int> dq;
        bool reverse  = false;
        cin >> str; 
        cin >> n;
        cin >> arr;
        int temp = 0;
        for(int j = 0; j<arr.size();j++){
            if(arr[j]>47&&arr[j]<58){
                temp = (temp*10) + (arr[j]-48);
            }
            else if(arr[j]==','){
                dq.push_back(temp);
                temp = 0;
            }
        }
        if(temp!=0){
            dq.push_back(temp);
        }
        for(int j = 0; j<str.size();j++){
            if(str[j]=='R'){
                if(reverse){
                    reverse=false;
                }
                else{
                    reverse=true;
                }
            }
            if(str[j]=='D'){
                if(dq.empty()){
                    error = true;
                    break;
                }
                if(reverse){
                    dq.pop_back();
                }
                else{
                    dq.pop_front();
                }
            }
        }
        if(error){
            cout<<"error\n";

        }
        else{
            cout<<"[";
            if(!dq.empty()){
                while(1){
                    if(reverse){
                        cout<<dq.back();
                        dq.pop_back();
                    }
                    else{
                        cout<<dq.front();
                        dq.pop_front();
                    }
                    if(dq.size()==0) break;
                    cout<<",";
                }
            }
            cout<<"]\n";
        }
    }

}