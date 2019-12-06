#include <iostream>
#include <string>
using namespace std;

class Empleado{

private:
	string nombre;
	int cedula;
	float horasTra;
	float pagoHoras;
	int tipoPuesto;

public:
	Empleado() {
		nombre = "indefinido";
		cedula = 0;
		horasTra = 0;
		pagoHoras = 0;
		tipoPuesto = 0;
	}


	Empleado(string unNombre, int unaCedula, float unasHorasTra,
		float unPagoHoras, int unTipoPuesto) {
		nombre = unNombre;
		cedula = unaCedula;
		horasTra = unasHorasTra;
		pagoHoras = unPagoHoras;
		tipoPuesto = unTipoPuesto;
	}

	void setNombre(string unNombre) {
		nombre = unNombre;
	}
	void setCedula(int unaCedula) {
		cedula = unaCedula;
	}
	void setHorasTra(float unasHorasTra) {
		horasTra = unasHorasTra;
	}
	void setPagoHoras(float unPagoHoras) {
		pagoHoras = unPagoHoras;
	}
	void setTipoPuesto(int unTipoPuesto) {
		tipoPuesto = unTipoPuesto;
	}

	string getNombre() {
		return nombre;
	}
	int getCedula() {
		return cedula;
	}
	float getHorasTra() {
		return horasTra;
	}
	float getPagoHoras() {
		return pagoHoras;
	}
	int getTipoPuesto() {
		return tipoPuesto;
	}

	float calculaPago() {
		return (horasTra * pagoHoras) * 6;
	}

	~Empleado() {}
};
