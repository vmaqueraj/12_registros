#include <iostream>
#include <string>
using namespace std;

struct Empleado{
	string nombres;
	string sexo;
	int sueldo;	
};


int main () {
	int n;
	int mayor, menor;
	Empleado empleados[100];
	
	cout << "Ingrese la cantidad de empleados: ";
	cin >> n;	
	cin.ignore(); 
	
	for (int i=0; i<n; i++){
		cout << endl << "Empleado " << i+1 << endl;
		cout << "Nombres: ";
		getline(cin, empleados[i].nombres);
		cout << "Sexo: ";
		getline(cin, empleados[i].sexo);
		cout << "Sueldo: ";
		cin >> empleados[i].sueldo;
		cin.ignore();
	}
	
	// Identificar el empleado con mayor y menor sueldo
	
	mayor = 0;
	menor = 0;
	
	for(int i=1; i<n; i++){
		if (empleados[i].sueldo > empleados[mayor].sueldo){
			mayor = i;
		}
		if (empleados [i].sueldo < empleados[menor].sueldo){
			menor = i;
		}
	}
	
	cout << empleados[mayor].nombres<<endl;
	cout << empleados[menor].nombres<<endl;
	
	
	
	return 0;
}
