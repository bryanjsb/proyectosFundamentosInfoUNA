#include "MedioDeTransporteTerrestre.h"

int main(){
	MedioDeTransporteTerrestre bus("I111111", "Irene",2012,"bus","privado",10000.0);
	

	cout << "info del bus" << endl;
	bus.info();
	cout<<endl;

	MedioDeTransporteTerrestre carro;
	carro.setPlaca("C093456");
	carro.setDueno("Carlos");
	carro.setAnno(1999);
	carro.setServicio("carro");
	carro.setTipo("publico");
	carro.setValorFiscal(68000.0);

	cout << endl<<"info del carro" << endl;
	carro.info();
	cout<<endl;


	MedioDeTransporteTerrestre autoMovil;
	string _placa;
	string _dueno;
	int _anno;
	string _servicio;
	string _tipo;
	double valor;

	cout << "construyendo un automovil" << endl;
	cout<<"Ingrese la informacion agregando la primer letra sea mayuscula."<<endl;

	cout<<"ingrese la placa"<<endl;
	cin>>_placa;
	autoMovil.setPlaca(_placa);
	cout<<"ingrese el nombre del dueño"<<endl;
	cin>>_dueno;
	autoMovil.setDueno(_dueno);
	cout<<"ingrese el anno del vehiculo"<<endl;
	cin>>_anno;
	autoMovil.setAnno(_anno);
	cout<<"ingrese el tipo de servicio"<<endl;
	cin>>_tipo;
	autoMovil.setTipo(_tipo);

	cout << "ingrese el valor de automovil" << endl;
	cin >> valor;
	autoMovil.setValorFiscal(valor);

	cout << endl << "info del automovil" << endl;
	autoMovil.info();
	cout << endl;


	bus.~MedioDeTransporteTerrestre();
	carro.~MedioDeTransporteTerrestre();
	autoMovil.~MedioDeTransporteTerrestre();
	cin.get();
	system("pause");
}