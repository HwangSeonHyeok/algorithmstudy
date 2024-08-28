#include <iostream>
#define SIZE 80
using namespace std; 
int main(){
    int n, n2;
    double sum, avg, count=0;
    cin>>n;
    double per[n];
    for(int i = 0; i<n; i++){
        cin >> n2;
        int scorearr[n2];
        sum=0;
        for(int j = 0; j < n2; j++){
            cin >> scorearr[j];
            sum += scorearr[j];
        }
        avg = sum/n2;
        count = 0;
        for (int j = 0; j < n2; j++){
            if(scorearr[j]>avg) count++;
        }
        per[i] = count/n2*100;

    }
    for (int i = 0; i < n; i++){
        printf("%.3f%\n", per[i]);
    }

}