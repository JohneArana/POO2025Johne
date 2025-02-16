#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit, nombres, apellidos, direccion, fecha_nacimiento;
	int telefono;
	
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Fecha de Nacimiento: ";
	cin>>fecha_nacimiento;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	Cliente cliente = Cliente(nombres, apellidos, direccion, telefono, fecha_nacimiento, nit);
	cliente.leer();
	
}
