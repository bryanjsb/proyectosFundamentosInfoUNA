/*UNIVERSIDAD NACIONAL
CURSO FUNDAMENTOS PARA INFORMATICA
INTEGRANTES BRYAN SÁNCHEZ BRENES
*/
#include"matriz.h"
int main()
{
	string cont;
	contenedor m1;
	m1.llenarMatriz();
	cout << m1.toString();


	cout << "el pais en la posicion 5 es:" << m1.retornaPais(5) << endl;
	cout << "el paises en primer lugar:"<<endl << m1.retornaPrimerLugar(5) << endl;
	cout << m1.retornaPais(5) << " fue campeon en el ano:199" << m1.annoCampeon(5) << endl;
	cout << m1.retornaPais(5) << " fue campeon:" << m1.vecesCampeon(5) << " veces" << endl;
	cout << "pais mas veces campeon:" << m1.retornaPais(m1.paisMasVecesCampeon()) << endl;
	cout << m1.PosicionRanking(5, 5) << endl;
	cout << "los puntajes de los paises de año a al año b son:"
		<<endl << m1.imprimeDatos(2,5) << endl;

	
	system("pause");
}