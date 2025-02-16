#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona{
	private :
		string nit;
		
	//metodos (constructores y metodos crud) (debemos crear que nivel de acceso tendrán)
	public :
		Cliente (){
		}
		Cliente (string nom, string ape, string dir, int tel, string fn, string n) : Persona(nom, ape, dir, tel, fn){
			nit = n;
		}
		void leer(){
			cout<<"Nit: "<< nit<<endl;
			cout<<"Nombres: "<<nombres<<endl;
			cout<<"Apellidos: "<<apellidos<<endl;
			cout<<"Direccion: "<<direccion<<endl;
			cout<<"Telefono: "<<telefono<<endl;
			cout<<"Fecha de Nacimiento: "<<fecha_nacimiento<<endl;
		}	 
};
