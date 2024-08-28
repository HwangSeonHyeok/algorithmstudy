#include <iostream>
using namespace std; 
int main(){
    int n;
    double avg;
    double max, sum = 0;
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for (int i = 0; i < n; i++){
        sum += arr[i]/max*100;
    }
    avg= sum/n;
    cout << avg;

}