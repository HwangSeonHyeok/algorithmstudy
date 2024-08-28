#include <iostream>
#include <string>

using namespace std;

int que[2000001]={0,};
int index = -1;
int rear = 0;


void push(int n){
    index++;
    que[rear+index] = n;
}
void pop(){
    if(index==-1){
        printf("%d\n",index);
    }
    else{
        printf("%d\n",que[rear++]);
        index--;
    }
}
void size(){
    printf("%d\n", index+1);
}
void empty(){
    if(index == -1){
        printf("%d\n", 1);
    }
    else
        printf("%d\n", 0);
}
void front(){
    if(index == -1){
        printf("%d\n", -1);
    }
    else{
        printf("%d\n",que[rear]);
    }
}
void back(){
    if(index == -1){
        printf("%d\n", -1);
    }
    else{
        printf("%d\n",que[rear+index]);
    }
}


int main(void){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t,n;
    string str;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> str;
        if(str=="push"){
            cin >> n;
            push(n);
        }
        else if(str=="pop"){
            pop();
        }
        else if(str=="size"){
            size();
        }
        else if(str=="empty"){
            empty();
        }
        else if(str=="front"){
            front();
        }
        else if(str=="back"){
            back();
        }
    }
}