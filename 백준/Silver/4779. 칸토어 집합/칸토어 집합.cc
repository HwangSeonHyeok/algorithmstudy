#include <iostream> 
#include <cmath>
using namespace std;
bool isSpace[540000] = {0,};
void cantor(int start, int end){
    if(end-start <= 1){
        return;
    }else{
        int divide1_3 = start + (end-start)/3, divide2_3 = start+(end-start)*2/3;
        for(int i = divide1_3; i < divide2_3;i++){
            isSpace[i] =1;
        }
        cantor(start,divide1_3);
        cantor(divide2_3,end);

    }

}






int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, maximum = pow(3,12);
    cantor(0,maximum);
    string str;
    for(int i = 0; i< maximum;i++){
        if(isSpace[i]){
            str+=' ';
        }else{
            str += '-';
        }
    }
    
    while(1){
        cin >> n;
        if(cin.eof()){
            break;
        }
        int end = pow(3,n);
        cout << str.substr(0,end)<<'\n';
        

    }


}