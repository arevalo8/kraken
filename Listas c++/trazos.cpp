#include <iostream>
#include "PilaD.h"

using namespace std;


class trazo{
	public:
		struct trazo{
			char sentido;
		};
		
		Simbolo();
		void añadirTrazo(trazo t);
		void eliminarTrazos(int n);
		const simbolo& simetriaX();
		const simbolo& simetriaY();
		const Simbolo& simetriaXY();
		~Simbolo();
	
	
	private:
		PilaD<trazo> trazos;	
		int nTrazos;
};



trazo::Simbolo() : nTrazos{0} {}

void simbolo::añadirTrazo(trazo t){
	trazos.push(t);
	nTrazos++;
}

void eliminarTrazos(int n){
	for(int i = 0; i < n; i++){
		trazos.pop();
		nTrazos--;
	}
}

const simbbolo& simbolo::simetriaX(){
	PilaD<trazo> aux, sim;
	int n = nTrazos
	
	while(n>0){
		if(trazos.sentido == 'a'){
			aux.push('d');
		}
		else if(trazos.sentido == 'd'){
			aux.push('a');
		}else{
		aux.push(trazos.tope());
	}
	trazos.pop();
	n1--;
	}
	int n2 = nTrazos;
	
	while(!aux.vacia()){
		sim.push(aux.tope());
		aux.pop();
	}
	
	return sim;
	
}


