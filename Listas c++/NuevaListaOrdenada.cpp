#include <iostream>
#include "ListaOrdenada.h"
#include <vector>

using namespace std;

ListaOrd<int> nueva(ListaOrd<int> L1, ListaOrd<int> L2){
	ListaOrd<int> L;
	ListaOrd<int>::posicion i, j;
	i = L1.primera();
	while(i != L1.fin()){
		L.insertar(L1.elemento(i));
		i = L1.siguiente(i);
	}
	i = L2.primera();
	while(i != L2.fin()){
		L.insertar(L2.elemento(i));
		i = L2.siguiente(i);
	}
	return L;
} 


void implista (const ListaOrd<int>& lista){ //IMPRIME LISTA CIRCULAR

    ListaOrd<int>::posicion i = lista.primera();
    do{
        cout << lista.elemento(i) << " ";
        i = lista.siguiente(i);
    } while (i != lista.fin());
    cout << endl;
}


ListaOrd<int> rellenarLista(int *v, int tam){
	ListaOrd<int> L;

	int j;
	
 	for(j = 0; j < tam; j++){
		L.insertar(v[j]);
		
	}
	return L;
}


int main(){
	ListaOrd<int> L1, L2, L;
	int v1[] = {1, 4, 7, 5, 12,16};
	int v2[] = {2,3,8,19,25};
	L1 = rellenarLista(v1, 6);
		
	L2 = rellenarLista(v2, 5);
	implista(L1);
	implista(L2);
	L = nueva(L1,L2);
	
	implista(L);
}
