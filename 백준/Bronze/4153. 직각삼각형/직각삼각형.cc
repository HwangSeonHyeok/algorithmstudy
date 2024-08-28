#include<iostream>
using namespace std; 
bool pit(int x, int y, int z){
    int a = x*x, b = y*y, c =z*z;
    if(a>b){
        if(a>c){
            if(a == b + c) return true;
            else return false;
        }
        else{
            if(c == a + b) return true;
            else return false;
        }
    }
    else{
        if(b>c){
            if(b == a + c)return true;
            else return false;
        }
        else{
            if(c == a + b) return true;
            else return false;

        }
    }


}

int main(){
    int a,b,c;
    while(1){
        cin >> a >> b >> c;
        if(a==0 && b==0 && c==0){
            return 0;
        }
        if(pit(a,b,c)) printf("right\n");
        else printf("wrong\n");
    }

}