#include "claseCuentaCorriente.h"

int main() {
	CuentaCorriente cuenta1(1234567,"Bryan",10000);
	float x;
	int caso;
	int y; // numero de cuenta que ingrese cin;
	cout << "\t\t\t\tBienvenido a su Banco PYMEX" <<  endl;
	cout << "***|numero de cuenta: " << cuenta1.getNumCuenta() << "|***" << endl;

	cout << "Ingrese el  numero de cuenta: ";
	cin >> y;

	if (y == cuenta1.getNumCuenta()){
		cout << "\t\t\t\tBienvenido :" << cuenta1.getNomDueño() << endl;
		cout << "Que accion desea realizar: 1-Ver saldo, 2-Retiro, 3-Deposito :";
		cin >> caso;
		switch (caso)
		{
		case 1:
			cout << "Su saldo en la cuenta es $ " << cuenta1.Saldo()<< endl;
			break;
		case 2:
			cout << "Cuanto desea retirar" << endl;
			cin >> x;
			cout << "Vas a retirar $ " << x << endl;
			cuenta1.Retiro(x);
			cout << "Su saldo en la cuenta es $ " << cuenta1.Saldo()<<endl;
			break;
		case 3:
			cout << "Cuanto desea depositar" << endl;
			cin >> x;
			cout << "Vas a depositar $ " << x << endl;
			cuenta1.Deposito(x);
			cout << "Su saldo en la cuenta es " << cuenta1.Saldo()<<endl;
			break;
		default:
			break;
		}
	}
	else {
		cout << endl;
		cout << "\t\tSu numero de cuenta es incorrecto, vuelvalo a intentar." << endl;
	}


	system("pause");
}