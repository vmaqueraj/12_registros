#include <iostream>
#include <string>
using namespace std;



struct Persona {
	string nombre; 
	int dia;
	int mes;
	int anio;
	
};



int main () {
	int n;
	Persona personas[100];
	
	cout << "Ingrese la cantidad de personas a registrar: ";
	cin >> n;
	cin.ignore();
	
	for (int i=0; i<n; i++){
		cout << endl << "Persona " << i+1 << endl;
		cout << "Nombres: ";
		getline(cin, personas[i].nombre);
		cout << "Dia de nacimiento: ";
		cin >> personas[i].dia;
		cout << "Mes de nacimiento: ";
		cin >> personas[i].mes;
		cout << "Anio de nacimiento: ";
		cin >> personas[i].anio;
		cin.ignore();
	}
		
		

	
	
	return 0;
}
