#include <iostream>
using namespace std;

class octal{

void octal (int x){
	if(x > 7){
		octal(x / 8);
	}
	cout<<x % 8;
	
	}
	int main(){
		int n;
		cout<<"Ingrese un numero";
		cin>>n;
		octal(n);
		return 0;
	}
	};
