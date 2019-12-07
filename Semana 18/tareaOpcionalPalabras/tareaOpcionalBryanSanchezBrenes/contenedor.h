#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class contenedor
{
private:
	int cantidad;
	char vector[20];
	int vectorA[20];
	int tamano;

public:

	contenedor() {
		tamano = 20;
		cantidad = 0;
		for (int i = 0; i < tamano; i++)
			vector[i] = 0;
	}


	int getCantidad() {
		return cantidad;
	}

	int getTamano() {
		return tamano;
	}

	void setTamano(int ptamano) {
		tamano = ptamano;
	}

	void setCantidad(int can) {
		if ((can < tamano) && (can >= 0)) {
			cantidad = can;
		}
	}


	///tostring vector
	string toString() {
		stringstream s;
		for (int i = 0; i < cantidad; i++) {
			s << vector[i];
		}
		return s.str();
	}


	void insertarElemento(int elem) {
		if (cantidad < tamano) {
			vector[cantidad] = elem;
			setCantidad(cantidad + 1);
		}
	}

	void plural() {
		if (vector[cantidad - 1] == 'a' || vector[cantidad - 1] == 'e'
			|| vector[cantidad - 1] == 'i' || vector[cantidad - 1] == 'o'
			|| vector[cantidad - 1] == 'u')
		{
			vector[cantidad++] = 's';
		}

		else if (vector[cantidad - 1] == 'z')
		{
			vector[cantidad - 1] = 'c';
			vector[cantidad++] = 'e';
			vector[cantidad++] = 's';
		}

		else
			/*if (vector[cantidad - 1] == !'a' || vector[cantidad - 1] == !'e'
			|| vector[cantidad - 1] == !'i' || vector[cantidad - 1] == !'o'
			|| vector[cantidad - 1] == !'u' || vector[cantidad - 1] == !'z')*/
		{
			vector[cantidad++] = 'e';
			vector[cantidad++] = 's';
		}



	}

	void codifica()
	{
		int cont = 1;
		for (int i = 0; i < cantidad; i++)
		{
			if (vector[i] == 'a')
				vector[i] = '1';
			if (vector[i] == 'e')
				vector[i] = '2';
			if (vector[i] == 'i')
				vector[i] = '3';
			if (vector[i] == 'o')
				vector[i] = '4';
			if (vector[i] == 'u')
				vector[i] = '5';

		}
	}
	////////////////////////////////////////////////////////////////

	bool esPalindrome() {
		int i, j;
		for (i = 0, j = cantidad - 1; i < cantidad / 2; i++, j--) {
			if (vector[i] != vector[j])
				return false;

		}
		return true;
	}


	////////////////////ejercicio 4

	void insertarElementoA(int elem)
	{
		if (cantidad < tamano)
		{
			vectorA[cantidad] = elem;
			setCantidad(cantidad + 1);
		}
	}

	string toStringA() {
		stringstream s;

		for (int i = 0; i < cantidad; i++) {
			s << ", " << vectorA[i];
		}
		return s.str();
	}


	void insertarUno(int pos2, int elem2)
	{
		int aux;
		for (int i = cantidad - 1; i >= pos2; i--)
		{
			aux = vectorA[i];
			vectorA[i + 1] = aux;
		}

		vectorA[pos2] = elem2;
		cantidad++;
	}



	void insertarVarios(contenedor vec2, int pos)
	{
		int aux;
		int j = 0;

		for (int i = pos; i < vec2.cantidad; i++)
		{
			insertarUno(i, vec2.vectorA[j++]);
		}

	}



	void eliminarUno(int pos)
	{
		for (int i = pos; i < cantidad; i++)
		{
			vectorA[i] = vectorA[i + 1];
		}
		cantidad--;
	}


	void eliminarVarios(contenedor vec2)
	{
		for (int i = 0; i < cantidad; i++)
		{
			for (int j = 0; j < vec2.cantidad; j++)
			{
				if (vectorA[i] == vec2.vectorA[j])
				{
					eliminarUno(i);
				}
			}
		}
	}

	~contenedor() {}

};



