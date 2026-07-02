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
				if (n==0){
					cout << endl << "No hay contactos registrados aun" << endl;
				} else {
					cout << endl << "-------- CONTACTOS POR SERVIDOR --------" << endl;
					cout << "Ingrese el servidor que desee buscar (ej: gmail.com, outlook.com): ";
					
					int cont, posArroba;
					string servidor, servidoremail;
					cont = 0;
					getline(cin, servidor);
					
					for (int i=0; i<n; i++){
						posArroba = 0;
						servidoremail = "";
							
						for (int j=0; j<contactos[i].email.size(); j++){
							if (contactos[i].email[j] == '@'){
								posArroba = j;
							}
						}
						
						for (int j=posArroba+1; j<contactos[i].email.size(); j++){
							servidoremail = servidoremail + contactos[i].email[j];
						}
						
						if (servidoremail == servidor){
							cout << endl << "Nombres: " << contactos[i].nombres << endl;
							cout << "Sexo: " << contactos[i].sexo << endl;
							cout << "Edad: " << contactos[i].edad << endl;
							cout << "Email: " << contactos[i].email << endl;
							cont = cont +1;
						}
					}
					
					if (cont == 0){
						cout << endl << "No se encontraron contactos con el servidor buscado" << endl;
					}
				}
				break;
				
			case 5:
				if (n==0){
					cout << endl << "No hay contactos registrados aun" << endl;
				} else {
					cout << endl << "-----------  ELIMINAR CONTACTO  ------------" << endl;
					cout << "Ingrese la posicion del contacto a eliminar (1 al " << n << "): ";
					
					int pos;
					cin >> pos;
					cin.ignore();
					
					if (pos<1 || pos>n){
						cout << endl << "Posicion no valida" << endl;
					} else {
						int ind;
						ind = pos - 1;
						
						for (int i=ind; i<n-1; i++){
							contactos[i] = contactos[i+1];
						}
						n = n - 1;
						cout << endl << "Contacto eliminado" << endl;
					}
				}
				break;
				
			case 6:
				if (n == 0){
					cout << endl << "No hay contactos registrados aun" << endl;
				} else {
					cout << endl << "---------  BUSQUEDA POR GMAIL  ----------" << endl;
					cout << "Ingrese el email a buscar: ";
					
					int cont;
					string emailbuscar;
					cont = 0;
					
					getline(cin, emailbuscar);
					
					for (int i=0; i<n; i++){
						if (contactos[i].email == emailbuscar){
							cout << endl << "Contacto encontrado en la posicion: " << i+1 << endl;
							cout << "Nombres: " << contactos[i].nombres << endl;
							cout << "Sexo: " << contactos[i].sexo << endl;
							cout << "Edad: " << contactos[i].edad << endl;
							cout << "Email: " << contactos[i].email << endl;
							cont = cont + 1;
						}
					}
					
					if (cont == 0){
						cout << endl << "No se encontro ningun contacto con ese email" << endl;
					}
				}
				break;
				
			case 0:
				cout << endl << "Se saldra del programa..." << endl;
				break;
				
			default:
				cout << endl << "Opcion incorrecta. Ingrese una opcion valida" << endl;
				break;
		}
		
		
		
	} while (opcion != 0);
	
	cout << endl << "Programa finalizado, hasta pronto" << endl;
		
	return 0;
}
