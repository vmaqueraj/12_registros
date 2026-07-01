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
		cout << "=====================================================" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		cin.ignore();
		
		
		switch (opcion){
			case 1:
				
				
			case 2: 
			
			
			case 3: 
			
			
			case 4: 
			
			
			case 5:
				
				
			case 6:
				
			
			case 0:
				
			
			default:
				
				
		}
		
		
		
	} while (opcion != 0);
	
	cout << endl << "Programa finalizado, hasta pronto" << endl;
		
	return 0;
}
