#include"contenedor.h"
using namespace std;


void main()
{

	contenedor palabra;
	contenedor v1;
	contenedor v2;


	int num=0;
	int cont=0;
	char elem;


	cout<<"cuántos letras tiene la palabra? "<<endl;
	cin>>num;
	cont=0;

	cout << "ingrese la palabra? " << endl;
	while (palabra.getCantidad()< palabra.getTamano() && cont<num)
  {
		/*cout<<"letra "<<cont+1<<": "; */
    cin>>elem; 
    palabra.insertarElemento(elem);
    cont++;
  } 

	cout<<endl<<palabra.toString()<<endl;

	palabra.plural();
	cout << "Palabra en plural: " <<endl<<palabra.toString()<<endl;

	////////////////////////////////////////////////
	cout<<"codifica vocales por numeros"<<endl;
	palabra.codifica();
	cout << "Palabra codificada:" <<endl<< palabra.toString()<< endl;


	cout << "\t\t\tpalindrome" << endl;
	cout << "cuántos letras tiene la palabra? " << endl;
	cin >> num;
	cont = 0;
	palabra.setCantidad(0);

	cout << "ingrese la palabra" << endl;
	while (palabra.getCantidad() < palabra.getTamano() && cont < num)
	{
		cin >> elem;
		palabra.insertarElemento(elem);
		cont++;
	}

	cout << palabra.toString()<<": ";
	if(palabra.esPalindrome())
		cout<<"es palindrome"<<endl;
	else
		cout<<"no es palindrome"<<endl;


	//////////////////////////////ejrcicio 4
	cout << "Ejercicio 4" << endl;
	v1.insertarElementoA(1);
	v1.insertarElementoA(3);
	v1.insertarElementoA(6);
	v1.insertarElementoA(9);
	v1.insertarElementoA(17);

	v2.insertarElementoA(2);
	v2.insertarElementoA(4);
	v2.insertarElementoA(10);
	v2.insertarElementoA(17);


	cout << "vec1" << v1.toStringA() << endl;
	cout << "vec2" << v2.toStringA() << endl;

	cout << "insertar UNO  en la posicion:";
	int pos;
	cin >> pos;
	v1.insertarUno(2, pos);
	cout << v1.toStringA() << endl;
	cout << "insertar elementos de vector2 al vector1 en la posicion:";
	pos = 0;
	cin >> pos;
	v1.insertarVarios(v2, pos);

	cout << "las nuevas posiciones ";
	cout << v1.toStringA() << endl;
	cout << "las posiciones que se agregaron";
	cout << v2.toStringA() << endl;

	cout << "ingrese la posicion que desea ELIMIAR" << endl;
	int posc;
	cin >> posc;

	v1.eliminarUno(posc);
	cout << v1.toStringA() << endl;

	cout << "ELIMINAR VARIOS " << endl;
	cout << "vec1: " << v1.toStringA() << endl;
	cout << "vec2: " << v2.toStringA() << endl;
	v1.eliminarVarios(v2);
	cout << v1.toStringA() << endl;


	system("pause");
}