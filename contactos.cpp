#include <iostream>
#include <string>
using namespace std;

struct ContactoEmail {
	string nombres; 
	string sexo;
	int edad;
	string email;
};


int main (){
	ContactoEmail contactos[300];
	int n, opcion;
	n = 0;
	
		
	do {
		cout << endl << "=============  AGENDA DE CONTACTOS  =============" << endl;
		cout << "1. Agregar un contacto" << endl;
		cout << "2. Modificar un contacto" << endl;
		cout << "3. Mostrar listado general de contactos" << endl;
		cout << "4. Mostrar contactos por servidor" << endl;
		cout << "5. Eliminar un contacto" << endl;
		cout << "6. Buscar contacto por email" << endl;
		cout << "0. Salir" << endl;
		cout << "=================================================" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		cin.ignore();
		
		
		switch (opcion){
			
			case 1:
				cout << endl << "----- AGREGAR CONTACTO -----" << endl;
				cout << "Nombres: ";
				getline(cin, contactos[n].nombres);
				cout << "Sexo (M/F): ";
				getline (cin, contactos[n].sexo);
				cout << "Edad: ";
				cin >> contactos[n].edad;
				cin.ignore();
				cout << "Email: ";
				getline(cin, contactos[n].email);
				n = n + 1;
				break;
				
			case 2: 
			
				break;
			case 3: 
			
				break;
			case 4: 
			
				break;
			case 5:
				
				break;
			case 6:
				
				break;
			case 0:
				
				break;
			default:
				
				break;
		}
		
		
		
	} while (opcion != 0);
	
	cout << endl << "Programa finalizado, hasta pronto" << endl;
		
	return 0;
}
