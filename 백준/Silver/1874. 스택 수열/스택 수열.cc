#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int stack[100002] = {0,};
int numarr[100002] = {0,};
int index = 0;
int numindex = 1;

void push(int n){
    stack[++index]=n;
}
void pop(){
    index--;
}
int top(){
    return stack[index];
}


int main(){
    int n, i = 1;
    vector<char>result;
    cin >> n;
    for(int i = 1; i<=n; i++){
        scanf("%d", &numarr[i]);
    }
    while(numindex<=n){
        if(numarr[numindex]>top()&&i<=n){
            push(i++);
            result.push_back('+');
        }
        else if(numarr[numindex]==top()){
            pop();
            result.push_back('-');
            numindex++;
        }
        else{
            cout<<"NO";
            return 0;
        }

    }
    for(int i = 0; i<result.size(); i++){
        cout << result[i]<<'\n';
    }

    

}