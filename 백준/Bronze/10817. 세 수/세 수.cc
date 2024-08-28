#include <iostream>
using namespace std; 
int main()
{
	int a, b, c, answer;
	cin >> a >> b >> c;
	if ((a-b)* (a-c) <=0 ){
	    cout <<a;
	    return 0;
	}
	if ((b-a)* (b-c) <=0 ){
	    cout << b;
	    return 0;
	}
	cout << c;
	return 0;
}