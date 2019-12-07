#include <iostream>
#include <string>
using namespace std;

class MedioDeTransporteTerrestre {
private:
	string placa;
	string dueno;
	int anno;
	string servicio;
	string tipo;
	double valorFiscal;

public:
	MedioDeTransporteTerrestre() :MedioDeTransporteTerrestre(" ", " ", 0, " ", " ", 0.0) {}

	MedioDeTransporteTerrestre(string plac, string due, int ano,
		string serv, string tip, double valorF) :placa(plac), dueno(due), anno(ano),
		servicio(serv), tipo(tip), valorFiscal(valorF) {}

	void setPlaca(string plac) {
		placa = plac;
	}
	void setDueno(string due) {
		dueno = due;
	}
	void setAnno(int ano) {
		anno = ano;
	}
	void setServicio(string serv) {
		servicio = serv;
	}
	void setTipo(string tip) {
		tipo = tip;
	}
	void setValorFiscal(double valorF) {
		valorFiscal = valorF;
	}

	string getPlaca() {
		return placa;
	}
	string getDueno() {
		return dueno;
	}
	int getAnno() {
		return anno;
	}
	string getServicio() {
		return servicio;
	}
	string getTipo() {
		return tipo;
	}
	double getValorFiscal() {
		return valorFiscal;
	}

	//metodos
	double impuesto() {
		double impuesto = 0.0;
		if (anno < 1985) {
			impuesto = valorFiscal * 0.05;
		}
		else if (anno >=1985) {
			impuesto = valorFiscal * 0.10;
		}
		else if (anno > 2000) {
			impuesto = valorFiscal * 0.20;
		}
		return impuesto;
	}

	double marchamo() {
		return (valorFiscal + impuesto()) * 0.15;
	}

	void infoPlaca() {
		int tam;
		tam = placa.size();
		cout << "Placa: " << placa << endl;
		cout << "Numero de carácteres: " << tam << endl;
		tam = tam - 1;
		cout << "Ultimo digito: " << placa.substr(tam, 1)<<endl;
	}

	string restriccion() {
		char f = placa.back();
		if (tipo == "Publico"||"publico")
			return "Ninguno";
		else
			if (tipo == "Privado"||"privado") {
				if ((f == 0) || (f == 1))
					return "Lunes";
				if ((f == 3) || (f == 4))
					return "Martes";
				if ((f == 5) || (f == 6))
					return "Miercoles";
				if ((f == 7) || (f == 8))
					return "Jueves";
				if ((f == 9) || (f == 0))
					return "Viernes";
			}
			else return "Error";
	};

	void info() {
		infoPlaca();
		cout << "Duenno: " << getDueno() << endl;
		cout << "Anno del vehiculo: " << getAnno() << endl;
		cout << "Tipo de servicio: " << getServicio()<<" "<<getTipo() << endl;
		cout << "Valor fiscal es: " << getValorFiscal() << endl;
		cout << "Dia que tiene restriccion: " << restriccion() << endl;
		cout << "Impuestos del vehiculo: " << impuesto() << endl;
		cout << "Pago del marchamo es: " << marchamo() << endl;
	}
	~MedioDeTransporteTerrestre() {
		cout << "medio de transporte eliminado" << endl;
	}

};