#include <iostream>
#include <vector>
#include "ListaCir.h"


using namespace std;


void eliminar(ListaCir<int>& L, int x){
	while(L.buscar(x)){
		L.eliminar(L.buscar(x));
	}
}

void rellenarLista(vector<int>& v){
	ListaCir<int> L;
	for(ListaCir::posicion i = 0; i < v.size(); i++){
		L.insertar(v[i], i);
	}
	return L;
}



int main(){
	ListaCir<int> L;
	vector<int> v{1,4,7,3,7,8,5,7,9,2};
	L = rellenarLista(v, L);
	eliminar(L, 7);
	
	int p = 0;
	while(p != POS_NULA){
		cout << elmento(p) << " ";
		p++;
	}
}
