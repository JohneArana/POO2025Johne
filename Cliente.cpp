#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona{
	private :
		string nit;
		
	//metodos (constructores y metodos crud) (debemos crear que nivel de acceso tendr�n)
	public :
		Cliente (){
		}
		Cliente (string nom, string ape, string dir, int tel, string n) : Persona(nom, ape, dir, tel){
			nit = n;
		}
		//set (sirven para modificar un atributo, o para enviar los datos al atributo)
		void setNit(string n){
			nit = n;
		}
		void setNombres(string nom){
			nombres = nom;
		}
		void setApellidos(string ape){
			apellidos = ape;
		}
		void setDireccion(string dir){
			direccion = dir;
		}
		void setTelefono(int tel){
			telefono = tel;
		}
		string getNit(){
			return nit;
		}
		string getNombres(){
			return nombres;
		}
		string getApellidos(){
			return apellidos;
		}
		string getDireccion(){
			return direccion;
		}
		int getTelefono(){
			return telefono;
		}
		void leer(){
			cout<<"Nit: "<< nit<<endl;
			cout<<"Nombres: "<<nombres<<endl;
			cout<<"Apellidos: "<<apellidos<<endl;
			cout<<"Direccion: "<<direccion<<endl;
			cout<<"Telefono: "<<telefono<<endl;
		}	 
};
