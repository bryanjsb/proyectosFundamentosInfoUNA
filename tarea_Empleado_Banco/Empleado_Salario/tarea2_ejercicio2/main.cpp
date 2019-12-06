#include "empleado.h"

int main() {
	Empleado emple1;


	int opcion;
	int escojeEmple;

	float pHora;
	float horasEmple;
	int porcientoHoras;
	float promedioHoras;
	float sumaHoras;
	string a_puesto;
	string puesto;

	cout << "llene la informacion del empleado" << endl;

	cout << "Ingrese las horas del empleado 1: " << endl;
	cin >> horasEmple;
	emple1.setHorasTra(horasEmple);
	cout << "Que opcion desea realizar: 1-Pago de salario, 2-Modificar horas del empleado, 3-Modificar puesto de empleados." << endl;
	cout << "Opcion es ";
	cin >> opcion;

	switch (opcion)
	{

	case 1:
		cout << "Ingrese lo que paga por hora al empleado: $";
		cin >> pHora;
		emple1.setPagoHoras(pHora);
		cout << "El salario del empleado es: $" << emple1.calculaPago() << endl;
	case 2:
		cout << "Ingrese el porciento de horas extra % ";
		cin >> porcientoHoras;
		promedioHoras = (horasEmple / 100) * porcientoHoras;
		sumaHoras = horasEmple + promedioHoras;
		cout << "El promedio de las horas es: " << promedioHoras << endl;
		cout << "Horas actuales: " << sumaHoras << endl;
		pHora = sumaHoras;
		emple1.setPagoHoras(pHora);
		cout << "El nuevo salario es: " << emple1.calculaPago() << endl;

	case 3:
		cout << "El puesto del empleado ";
		cin >> a_puesto;
		cout << "Ingresar el nuevo puesto: cajero, miselaneo, gerente, bodegero.  " << endl;
		cout << "El puesto es ";
		cin >> puesto;

		if (puesto == a_puesto)
		{
			cout << "Escoja otro puesto" << endl;
		}
		else {
			if (puesto == "gerente") {
				cout << "El nuevo puesto del empleado es Gerente" << endl;
			}
			if (puesto == "miselaneo") {
				cout << "El nuevo puesto del empleado es Miselaneo" << endl;
			}
			if (puesto == "cajero") {
				cout << "El nuevo puesto del empleado es Cajero" << endl;
			}
			if (puesto == "bodegero") {
				cout << "El nuevo puesto del empleado es Bodegero" << endl;
			}
		}

	default:
		break;
	}


	system("pause");
}