#include <iostream>
using namespace std;
class Persona {
	// atributos
	protected :
	string nombres,apellidos, direccion;
	int telefono;
	
	// metodos
	//constructor (sirve para enviar parametros entre clases)
	protected :
	Persona(){
	}
	Persona (string nom,string ape,string dir,int tel){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
	}
	// crud
	void crear();
	void leer();
	void actualizar();
	void borrar();
};
