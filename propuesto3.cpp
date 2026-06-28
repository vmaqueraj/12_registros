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
	
	cout << "------------------------------------------";
	
	// Solicitar número de mes y mostrar datos de las personas
	int buscarmes, cont;
	
	do {
		cout << endl << "Ingrese un mes para consultar (presione 0 para salir): ";
		cin >> buscarmes;
		
		if (buscarmes !=0){
			cout << endl << "Personas que cumplen anios en el mes " << buscarmes << endl;
			
			cont = 0;
			
			for (int i=0; i<n; i++){
				if (personas[i].mes == buscarmes){
					cout << endl << "Nombres: " << personas[i].nombre << endl;
					cout << "Fecha de nacimiento: " << personas[i].dia << " - " << personas[i].mes << " - " << personas[i].anio << endl;
					cont = cont + 1;
				}
			}
			
			if (cont == 0){
				cout << "No hay personas registradas que cumplan anios en ese mes." << endl;	
			}
		}
		
	} while (buscarmes !=0);		
	
	cout << endl << "Programa finalizado" << endl;
	
	return 0;
}
