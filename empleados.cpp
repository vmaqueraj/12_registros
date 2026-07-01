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
	
	// Mayores ventas durante el año
	for (int i=0; i<n; i++){
		empleados[i].suma = 0;
		
		for (int j=0; j<12; j++){
		empleados[i].suma = empleados[i].suma + empleados[i].v[j];
		}
	}
	
	int nume, max;
	max = empleados[0].suma;
	nume = 0;
	
	for (int i=1; i<n; i++){
		if (empleados[i].suma > max){
			max = empleados[i].suma;
			nume = i;
		}
	}
	
	cout << endl << "EMPLEADO CON MAYORES VENTAS DURANTE EL ANIO" << endl;
	cout << "Numero: " << empleados[nume].num << endl;
	cout << "Nombres: " << empleados[nume].nombre << endl;
	
	// Incremento de salario
	for (int i=0; i<n; i++){
		if (empleados[i].suma > 100){
			empleados[i].salario = empleados[i].salario + (empleados[i].salario*0.1);
		}
	}






	return 0;
}

