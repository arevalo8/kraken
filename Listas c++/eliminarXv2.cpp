#include "lista_enlazada.h"
#include <iostream>

using namespace std;

void eliminar(Lista<int>& L, int x){
	int pos = L.primera();
	while(!L.fin()){
		if(L.elemento(pos) == x){
			L.eliminar(pos);
		}
	}
}


Lista<int> rellenarLista(int *v, int n){
	Lista<int> L;
	posicion pos = L.primera(); 
	for(int i = 0; i<n; i++){
		L.insertar(v[i], pos);
		pos = L.siguiente(pos);
	}
}

void imprimirLista(Lista<int>& L){
	posicion p = L.primera();
	while(p != L.fin()){
		cout << L.elemento(p);
		p = L.siguiente(p);
	}
	cout << endl;
}

int main{
	
	int n = 7
	int v[n] = {5, 3, 8, 3, 4, 6, 9};
	Lista<int> L = rellenarLista(v, n);
	imprimirLista(L);
	eliminar(L, 3);
	imprimirLista(L);
}
