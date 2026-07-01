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
				if (n == 0){
					cout << endl << "No hay contactos registrados aun" << endl;
				} else {
					cout << endl << "-------  MODIFICAR CONTACTO  -------" << endl;
					cout << "Ingrese la posicion del contacto a modificar (1 al " << n << "): ";
					
					int pos;
					cin >> pos;
					cin.ignore();
					
					if (pos<1 || pos>n){
						cout << endl << "Posicion invalida." << endl;
					} else {
						int ind;
						ind = pos - 1;
						cout << endl << "Ingrese los nuevos datos" << endl;
						cout << "Nombres: "; 
						getline (cin, contactos[ind].nombres);
						cout << "Sexo (M/F): ";
						getline(cin, contactos[ind].sexo);
						cout << "Edad: ";
						cin >> contactos[ind].edad;
						cin.ignore();
						cout << "Email: ";
						getline(cin, contactos[ind].email);
						cout << endl << "Contactos modificado" << endl;				
					}
				}
				break;
				
			case 3: 
				if (n == 0){
					cout << endl << "No hay contactos registrados aun" << endl;
				} else {
					cout << endl << "---------  LISTADO GENERAL DE CONTACTOS ----------" << endl;
					for (int i=0; i<n; i++){
						cout << endl << "Posicion: " << i+1 << endl;
						cout << "Nombres: " << contactos[i].nombres << endl;
						cout << "Sexo: " << contactos[i].sexo << endl;
						cout << "Edad: " << contactos[i].edad << endl;
						cout << "Email: " << contactos[i].email << endl;
					}
				}
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
