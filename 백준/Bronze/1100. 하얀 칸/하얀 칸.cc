#include<iostream>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    char chess;
	int cnt = 0;
	for(int i = 1; i<=8; i++){
		for(int j = 1; j<=8; j++){
			cin >> chess;
			if((i+j) % 2 == 0 && chess == 'F'){
				cnt++;
			}

		}
	}
	cout << cnt;
}