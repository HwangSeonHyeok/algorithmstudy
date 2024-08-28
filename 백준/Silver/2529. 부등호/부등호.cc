#include <iostream> 
#include <string>
using namespace std;
char symbol[9];
bool visited[10] = {0,};
int n;
string minans = "", maxans = "";
string current = "";
void solve(int num){
    if(num == n+1){
        
        if(minans==""){
            minans = current;
        }else{
            if(maxans=="")maxans = current;
            else if(maxans<current){
                maxans = current;
            }
        }
        return;
    }
    if(num==0){
        for(int i = 0;i<10;i++){
            if(!visited[i]){
                current+=i+'0';
                visited[i] = true;
                solve(num+1);
                current.erase(num,num+1);
                visited[i] = false;
            }
        }
    }else{
        if(symbol[num-1]=='<'){
            for(int i = 0; i<10;i++){
                if(!visited[i]&&current.back()-'0'<i){
                    current+=i+'0';
                    visited[i] = true;
                    solve(num+1);
                    current.erase(num,num+1);
                    visited[i] = false;
                }
            }
        }else if(symbol[num-1]=='>'){
            for(int i =0; i<10; i++){
                if(!visited[i]&&current.back()-'0'>i){
                    current+=i+'0';
                    visited[i] = true;
                    solve(num+1);
                    current.erase(num,num+1);
                    visited[i] = false;
                }
            }
        }


    }


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n;
    for(int i = 0; i<n;i++){
        cin >> symbol[i];
    }
    solve(0);
    cout << maxans << '\n';
    cout << minans;
    
    
    
}