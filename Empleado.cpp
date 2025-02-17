#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona{
	private :
		string codigo_empleado, puesto;
		
	//metodos (constructores y metodos crud) (debemos crear que nivel de acceso tendrán)
	public :
		Empleado (){
		}
		Empleado (string nom, string ape, string dir, int tel, string n, string ce, string pue) : Persona(nom, ape, dir, tel, fn){
			codigo_empleado = ce;
			puesto = pue;
		}
		//set (sirven para modificar un atributo, o para enviar los datos al atributo)
		void setCodigoEmpleado(string ce){
			codigo_empleado = ce;
		}
		void setPuesto(string pue){
			puesto = pue;
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
		string getCodigoEmpleado(){
			return codigo_empleado
		}
		string getPuesto(){
			return puesto
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
			cout<<"Codigo de Empleado: "<< codigo_empleado<<endl;
			cout<<"Puesto: "<<puesto<<endl;
			cout<<"Nombres: "<<nombres<<endl;
			cout<<"Apellidos: "<<apellidos<<endl;
			cout<<"Direccion: "<<direccion<<endl;
			cout<<"Telefono: "<<telefono<<endl;
		}	 
};
