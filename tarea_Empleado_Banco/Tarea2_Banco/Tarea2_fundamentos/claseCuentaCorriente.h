#include <iostream>
#include <string>
using namespace std;

class CuentaCorriente
{
private:
	int numCuenta;
	string nomDue�o;
	float saldoCuenta;

public:
	CuentaCorriente() {
		numCuenta = 123456;
		nomDue�o = "indefinido";
		saldoCuenta = 200000;
		cout<<"cuenta corriente creada"<<endl;
	}

	CuentaCorriente(int numC, string nomD, float saldoC) {
		numCuenta = numC;
		nomDue�o = nomD;
		saldoCuenta = saldoC;
		cout << "cuenta corriente creada" << endl;
	}

	void setNumCuenta(int numC) {
		numCuenta = numC;
	}
	void setNomDue�o(string nomD) {
		nomDue�o = nomD;
	}
	void setSaldoCuenta(float saldoC) {
		saldoCuenta = saldoC;
	}

	int getNumCuenta() {
		return numCuenta;
	}
	string getNomDue�o() {
		return nomDue�o;
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
