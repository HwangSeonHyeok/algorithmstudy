#define MAX_SIZE 10001
#include <iostream>
using namespace std;


int main(){
	int n, x, k, sum = 0;
	int countarr[MAX_SIZE] = {0,};
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
	    scanf("%d", &x);
	    countarr[x]++;
	}
	for(int i = 1; i<MAX_SIZE; i++){
	    for(int j = 0; j < countarr[i]; j++ ){
            printf("%d\n", i);
	    }   
	}
	
}