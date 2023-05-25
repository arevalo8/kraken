#include <iostream>
#include <ListaD.h>

using namespace std;

struct funcion{
	int ini, alt;
	funcion(double i, double a = 0) : ini{i}, alt{a};
};


class Escalonada{
	public:
		escalonada(funcion&);
		void añadirPunto(double, double);
		void eliminarEscalon(double);
		double calcularPunto(double);
		double calcularMin();
		double calcularMax();
		void traslacion(double, double)																												
		~escalonada();
		
	private:
		Lista<funcion> funciones;	
};


Escalonada::escalonada(funcion& f){
	
}

void Escalonada::añadirPunto(double x, double y){
	posicion pos = funciones.primera();
	bool insertada = false;
	
	while(pos != funciones.fin() && insertada != true){
		if(elemento(pos).ini == x ){
			funciones.elemento(pos).alt = y
		}else if(x > elemtento(pos).ini){
			funciones.insertar(pos, funcion(x, y));
			
		}else if(x < funciones.elemento(pos).ini && pos.siguiente){
		}
	}
}
