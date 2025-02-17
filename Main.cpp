#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	Cliente cliente = Cliente(nombres, apellidos, direccion, telefono, nit);
	cliente.leer();
	cout<<"Ingrese Nit a Modificar: ";
	cin>>nit;
	cliente.setNit(nit);
	cout<<cliente.getNit()<<","<<cliente.getNombres()<<" "<<cliente.getApellidos()<<endl;
	
}
