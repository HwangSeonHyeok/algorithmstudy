#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int stack[100001] = {0,};
int index = -1;
void push(int n){
    if(n==0){
        stack[index--]=0;
    }
    else
        stack[++index]=n;
}

int main(){
    int t, num, ans=0;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> num;
        push(num);
    }
    for(int i = 0; i<=index;i++){
        ans+=stack[i];
    }
    cout<<ans;

}