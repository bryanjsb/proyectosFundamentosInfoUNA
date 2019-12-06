#include <iostream>
#include <string>
using namespace std;

class CuentaCorriente
{
private:
	int numCuenta;
	string nomDueño;
	float saldoCuenta;

public:
	CuentaCorriente() {
		numCuenta = 123456;
		nomDueño = "indefinido";
		saldoCuenta = 200000;
		cout<<"cuenta corriente creada"<<endl;
	}

	CuentaCorriente(int numC, string nomD, float saldoC) {
		numCuenta = numC;
		nomDueño = nomD;
		saldoCuenta = saldoC;
		cout << "cuenta corriente creada" << endl;
	}

	void setNumCuenta(int numC) {
		numCuenta = numC;
	}
	void setNomDueño(string nomD) {
		nomDueño = nomD;
	}
	void setSaldoCuenta(float saldoC) {
		saldoCuenta = saldoC;
	}

	int getNumCuenta() {
		return numCuenta;
	}
	string getNomDueño() {
		return nomDueño;
	}
	float getSaldoCuenta() {
		return saldoCuenta;
	}

	float Saldo() {
		return (saldoCuenta);
	}

	void Deposito(int x) {
		saldoCuenta += x;
	}

	void Retiro(int x) {
		saldoCuenta -= x;
	}

	~CuentaCorriente() {
		cout << "cuenta corriente destruida" << endl;
	}
};
