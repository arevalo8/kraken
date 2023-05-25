#include <iostream>
#include <ColaD.h>

using namespace std;

struct trabajo{
	string idTrabajo;
	bool urgente;
	trabajo(string id, bool urg) : idTrabajo{id}, urgente{urg} {};
};

struct usuario{
	string idUsuario;
	cola<trabajo>(10) trabajos;
};

class Impresora{
	public:
		Impresora(int n);
		void anadirTrabajo(string usuario, string urgencia);
		void eliminarTrabajo(string usuario, string id);
		void cancelarTrabajos(string usuario);
	
	private:
	Cola<usuarios>(int tam) urg, noUrg;	
	int tam;
	void elimiarTrabajoAux;
	
};

Impresora::Impresora(int n) : tam{n} {
	Cola<usuarios>(int n) urg, noUrg;
}

void Impresora::anadirTrabajo(string usuario, bool urgencia){
	trabajo(usuario, urgencia);
}

void eliminarTrabajoAux(usuario& u, string id){
	Cola<trabajo>(10) Caux;
	while(!u.vacia()){
		if(u.idtrabajo != id)
			Caux.push(u.frente());
		u.pop();
	}
	while(!Caux.vacia()){
		u.push(Caux.frente());
		Caux.pop();
	}
	
}

void Impresora::eliminarTrabajo(string usuario, string id){
	Cola<usuario>(10) Caux;
	bool eliminado = false;
	bool encontrado = false;
	while(!urg.vacia()){
		if(urg.tope().idUsuario == usuario){
			eliminarTrabajoAux(urg.tope(), id);
			urg.pop();
			encontrado = true;
		}else{
		Caux.push(urg.tope());
		urg.pop();
		}
	}
	while(!Caux.vacia()){
		urg.push(Caux.tope());
		Caux.pop();
	}
	
	
	if(encontrado == false){
		
		while(!noUrg.vacia()){
		if(noUrg.tope().idUsuario == usuario){
			eliminarTrabajoAux(noUrg.tope(), id);
			noUrg.pop();
			eliminado = true;
		}else{
		Caux.push(noUrg.tope());
		noUrg.pop();
		}
	}
	while(!Caux.vacia()){
		noUrg.push(Caux.tope());
		Caux.pop();
	}
		
	}
	if(encontrado == false){
		print("el usuario no se ha encontrado")
	}
	
	
	
	
}


void Impresora::cancelarTrabajos(string id){
	
}

















