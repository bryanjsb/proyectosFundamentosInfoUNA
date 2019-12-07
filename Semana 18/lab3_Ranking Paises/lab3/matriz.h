#include<iostream>
#include<string>
#include<sstream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;

class contenedor
{
private:

	int cantidad;
	int static const  tamanoFila = 7;
	int static const tamanoColum = 5;
	int matriz[tamanoFila][tamanoColum];

public:

	contenedor() :contenedor(0) {}

	contenedor(int valor) {
		for (int i = 0; i < tamanoFila; i++)
		{
			for (int j = 0; j > tamanoColum; j++)
			{
				matriz[i][j] = valor;
			}
		}
		cantidad = 0;
	}

	int getTamFila(){
		return tamanoFila;
	}

	int getTanColumna(){
		return tamanoColum;
	}

	int getCantidad(){
		return cantidad;
	}

	void setCantidad(int can){
		int tam = tamanoColum * tamanoFila;
		if (can < tam && can >= 0) {
			cantidad = can;
		}
	}

	void setPos(int i, int j, int valor) {
		if (i < tamanoFila && j < tamanoColum) {
			matriz[i][j] = valor;
		}
		else {
			cout << "no se puede agregar" << endl;
		}
	}

	int getpos(int i, int j) {
		if (i < tamanoFila && j < tamanoColum) {
			return matriz[i][j];
		}
		else {
		cout << "no existe posicion" << endl;
		}
	}

	void llenarMatriz() {
		int valor = 0;
		for (int i = 0; i < tamanoFila; i++)
		{
			for (int j = 0; j < tamanoColum; j++)
			{
				/*cout << "ingrese el valor de la fila " << i << " columna " << j << endl;
				cin >> valor;*/
				srand(time(NULL));
				setPos(i, j, numeroAleatorio());
			}
		}
	}

	void insertarElem() {
		int valor, i, j;
		cout << "ingrese el valor " << endl;
		cin >> i;
		cin >> j;
		cin >> valor;
		setPos(i, j, valor);
	}

	string toString() {
		stringstream s;
		for (int i = 0; i < tamanoFila; i++)
		{
			for (int j = 0; j < tamanoColum; j++)
			{
				s << matriz[i][j] << "   ";
			}
			s << endl;
		}
		return s.str();
	}

	string retornaPais(int m) {
		stringstream p;

		switch (m) {
		case 0:
			p << "Guatemala ";
			break;
		case 1:
			p << "Honduras ";
			break;
		case 2:
			p << "Belice ";
			break;
		case 3:
			p << "El Salvador ";
			break;
		case 4:
			p << "Nicaragua ";
			break;
		case 5:
			p << "Costa Rica ";
			break;
		case 6:
			p << "Panama ";
			break;
		default:
			break;
		}
		return p.str();
	}




	string retornaPrimerLugar(int anno) {
		stringstream s;
		for (int i = 0; i < tamanoFila; i++) {
			if (matriz[i][anno] == 1) {
				s<<i<<": "<<retornaPais(i)<<" ";
			}
		}
		return s.str();
	}

	string imprimeDatos(int anno1, int anno2) {
		stringstream s;
		for (int i = 0; i < tamanoFila; i++) {
			for (int j = anno1; j < anno2; j++) {
				//if (j > anno1 || j < anno2) {
					s <<"["<< retornaPais(i) << ",199" << j << "]="<< matriz[i][j]<<"\t";
				/*}*/
			}
			s << endl;
		}
		return s.str();
	}

	int annoCampeon(int i) {
		int j = 0;
		for (j = 0; j < tamanoColum; j++) {
			if (matriz[i][j] == 1) {
				return j;
			}
		}
		return -1;
	}

	int vecesCampeon(int i) {
		int j;
		int cont = 0;
		for (j = 0; j < tamanoColum; j++) {
			if (matriz[i][j] == 1) {
				cont++;
			}
		}
		return cont;
	}

	int paisMasVecesCampeon() {
		int mayor=vecesCampeon(0);
		int aux = 0;
		int pos = 0;
		for (int i = 1; i < tamanoFila; i++) {
			aux = vecesCampeon(i);
			if (mayor< aux) {
				mayor = aux;
				pos = i;
			}
		}
		return pos;
	}

	string PosicionRanking(int pais, int anno) {
		stringstream s;
		s << retornaPais(pais) << " ranking: " << matriz[pais][anno]<<" anno:" <<anno;
		return  s.str();
	}

	int numeroAleatorio() {
		int num;
		srand(time(NULL));
		num = 0 + rand() % (tamanoFila - 1);
		Sleep(222);
		return num;
	}

	~contenedor(){}
};