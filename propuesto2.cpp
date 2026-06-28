#include <iostream>
#include <string>
using namespace std;

struct Persona{
	string nombres;
	string dni;
	int edad;
};


int main (){
	int n;
	Persona persona[100];
	
	cout << "Ingrese la cantidad de personas a registrar: ";
	cin >> n;
	cin.ignore();
	
	for (int i=0; i<n; i++){
		cout << endl << "Persona " << i+1 << endl;
		cout << "Nombres: ";
		getline(cin, persona[i].nombres);
		cout << "DNI: ";
		getline(cin, persona[i].dni);
		cout << "Edad: ";
		cin >> persona[i].edad;
		cin.ignore();
	}
	
	
	// Personas mayores a 50
	int mayores, suma;
	float prom;
	mayores = 0;
	suma = 0;
	
	for (int i=0; i<n; i++){
		if (persona[i].edad > 50){
			mayores = mayores + 1;
		}
	suma = suma + persona[i].edad;
	}
	
	cout << endl << "---------------------------------------";
	cout << endl << "Personas mayores a 50: " << mayores << endl;

	// Promedio de edades de las personas registradas
	prom = suma/n;
	cout << "Promedio de edades: " << prom << endl;
	
	cout << "---------------------------------------" << endl;
	// Listado completo de personas registradas 
	cout << endl << "Listado completo de personas registradas" << endl;
	for (int i=0; i<n; i++){
		cout << endl << "Persona " << i+1 << endl;
		cout << "Nombres: " << persona[i].nombres << endl;
		cout << "DNI: " << persona[i].dni << endl;
		cout << "Edad: " << persona[i].edad << endl;
	}
	
	return 0;
}
