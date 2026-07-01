#include <iostream>
#include <string>
using namespace std;

struct Empleado{
	int num;
	string nombre;
	int v[12];
	int salario;
	int suma;
};

int main (){
	int n;
	Empleado empleados[100];

	cout << "Ingrese la cantidad de empleados a registrar: ";
	cin >> n;
	cin.ignore();

	for (int i=0; i<n; i++){
		cout << endl << "Empleado " << i+1 << endl;
		cout << "Numero de empleado: ";
		cin >> empleados[i].num;
		cin.ignore();
		cout << "Nombres: ";
		getline (cin, empleados[i].nombre);
	
		cout << "Ingrese la venta de cada mes" << endl;	
		for (int j=0; j<12; j++){
			cin >> empleados[i].v[j];
		}
		cout << "Salario total: ";
		cin >> empleados[i].salario;
		cin.ignore();
	}






	return 0;
}

