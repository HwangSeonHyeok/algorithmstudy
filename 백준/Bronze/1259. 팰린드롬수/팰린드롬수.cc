#include <iostream>
#include <string>
using namespace std;


int main(){
    string num;
    while(1){
        cin >> num;
        if(num == "0")
            return 0;
        else{
            for(int i= 0; i< num.length(); i++){
                if(num[i] != num[num.length()-i - 1]){
                    cout << "no"<<endl;
                    break;
                }
                if(i == num.length()-1){
                    cout << "yes" << endl;
                }
            }
        }

    }

    
}