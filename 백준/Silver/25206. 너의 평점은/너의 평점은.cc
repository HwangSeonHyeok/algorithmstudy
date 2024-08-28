#include <iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string name, grade;
    float score, total=0, result = 0;
    for(int i = 0; i<20;i++){
        cin >> name >> score >> grade;
        if(grade == "P"){
            continue;
        }
        total += score;
        if(grade == "A+"){
            result += 4.5*score;
        }
        else if(grade == "A0"){
            result += 4.0*score;
        }
        else if(grade == "B+"){
            result += 3.5*score;
        }
        else if(grade == "B0"){
            result += 3.0*score;
        }
        else if(grade == "C+"){
            result += 2.5*score;
        }
        else if(grade == "C0"){
            result += 2.0*score;
        }
        else if(grade == "D+"){
            result += 1.5*score;
        }
        else if(grade == "D0"){
            result += 1.0*score;
        }
        else if(grade == "F"){
            result += 0.0*score;
        }
    }
    cout << result/total;
    
}