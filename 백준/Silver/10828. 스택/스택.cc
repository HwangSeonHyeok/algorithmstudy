#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int stack[10001] = {0,};
int index = -1;
void push(int n){
    stack[++index]=n;
}
void pop(){
    if(index==-1){
        cout<<-1<<endl;
    }
    else{
        cout << stack[index]<<endl;
    }
    stack[index] = 0;
    if(index>-1){
        index--;
    }
}
void size(){
    cout << index+1 << endl;
}
void empty(){
    if (index==-1){
        cout<< 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
}
void top(){
    if(index==-1){
        cout << -1 << endl;
    }
    else{
        cout << stack[index] <<endl;
    }
}


int main(){
    int t, num;
    string order;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> order;
        if(order=="push"){
            cin >> num;
            push(num);
        }
        else if(order == "pop"){
            pop();
        }
        else if(order == "size"){
            size();
        }
        else if(order == "empty"){
            empty();
        }
        else if(order == "top"){
            top();
        }
    }
}