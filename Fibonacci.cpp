#include <iostream>

using namespace std;




class NumeroFibonacci{
	private:
		int terminoAnterior;
		int terminoActual;
		int numeeroVecesActualizados;
		int valor;
	public:
		NumeroFibonacci();//Constructor
		int gvalor();  //metodos
		void avanzar();
		void  println();
};


	NumeroFibonacci::NumeroFibonacci(){//referencia al constructor
		terminoAnterior=0;
		terminoActual=0;
		numeeroVecesActualizados=0;
		valor=0;
	}
	
	int NumeroFibonacci::gvalor(){
		return valor;
	}
	
	void NumeroFibonacci::avanzar(){
		if(numeeroVecesActualizados==0){
			terminoAnterior=0;
			terminoActual=1;
		}
		if(numeeroVecesActualizados==1){
			terminoAnterior=1;
			terminoActual=1;
		}
		if(numeeroVecesActualizados >=2){
			 int respaldoTerminoAnterior= terminoAnterior;
			terminoAnterior= terminoActual;
			terminoActual= terminoAnterior + respaldoTerminoAnterior;
		}
		valor = terminoActual;
		numeeroVecesActualizados +=1;
	}
	
	void NumeroFibonacci::println(){
		cout<<""<<valor<<endl;
	}

	
	
int main() {
	
	NumeroFibonacci fibonacci= NumeroFibonacci();
fibonacci.avanzar();
fibonacci.avanzar();
fibonacci.avanzar();
fibonacci.avanzar();
fibonacci.avanzar();

fibonacci.println();
	
	return 0;
}

