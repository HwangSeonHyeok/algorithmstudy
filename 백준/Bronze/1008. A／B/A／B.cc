#include <iostream>
using namespace std; 
int main()
{
	int a,b;
	cin>>a>>b;
	if(a>0 && b<10){
        double c = double(a)/double(b);
        cout.precision(16);
		cout<<c;
	}
	
}