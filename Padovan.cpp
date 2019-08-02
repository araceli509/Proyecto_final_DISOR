#include <iostream>
using namespace std;

class SucesionPadovan{
	
	
	public: 
	SucesionPadovan();
	
	int sucesion(int n);
           void println();
	
};
  SucesionPadovan::SucesionPadovan(){
  	
  }

int SucesionPadovan::sucesion(int n){
	if(n==0||n==1||n==2){
		return 1;
	}else{
		
		return sucesion(n-2) + sucesion(n-3);
	}
}

	
int main (){
	SucesionPadovan suce=SucesionPadovan();
	for(int i =0;i<=10;i++){
		suce.sucesion(10);
		suce.println();
		
		
	}
}
