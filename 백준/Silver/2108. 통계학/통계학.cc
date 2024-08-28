#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
	int n, med, mode, range,  sum = 0, max = -1, count = 0, stat = 0;
    float mean;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr,arr+n);
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(i!=0 && arr[i] == arr[i-1]){
            count++;
        }
        else count = 0;
        if(count>max){
                max = count;
                stat = 0;
                mode = arr[i];
            }
            else if(count == max && stat == 0){
                stat = 1;
                mode = arr[i];
            }
    }
    mean = round(float(sum)/n);
    if(mean==-0){
        mean = 0;
    }
    med = arr[n/2];
    range = arr[n-1]-arr[0];
    printf("%.0f\n", mean);
    printf("%d\n", med);
    printf("%d\n", mode);
    printf("%d\n", range);
}