#include <iostream>
#include <string>
using namespace std;

struct Producto {
	string nombre;
	float precio;
};

struct Venta {
	int idVenta;
	string producto;
	int cantidad;
	float precioTotal;
};

int main (){
	Producto productos[300];
	Venta ventas[300];
	
	int nP, nV;
	char opcion;
	nP = 0;
	nV = 0;
	
	
	do {
		cout << endl << "=============  GESTION DE VENTAS  =============" << endl;
		cout << "A. Registrar un nuevo producto" << endl;
		cout << "B. Listar los productos registrados" << endl;
		cout << "C. Buscar un producto por nombre" << endl;
		cout << "D. Actualizar los datos de un producto" << endl;
		cout << "E. Eliminar un producto" << endl;
		cout << "F. Registrar una venta" << endl;
		cout << "G. Listar las ventas realizadas" << endl;
		cout << "H. Calcular el total de ventas realizadas" << endl;
		cout << "S. Salir" << endl;
		cout << "===============================================" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		cin.ignore();
		
		switch (opcion){
			case 'A': {
				cout << endl << "-------------  REGISTRAR PRODUCTO -------------" << endl;
				cout << "Nombre: ";
				getline(cin, productos[nP].nombre);
				cout << "Precio: ";
				cin >> productos[nP].precio;
				cin.ignore();
				nP = nP + 1;
				cout << endl << "Producto registrado correctamente" << endl;
				break;
			}
			
			case 'B': {
				if (nP == 0){
					cout << endl << "No hay productos registrados aun" << endl;
				} else {
					cout << endl << "----------- LISTADO DE PRODUCTOS -----------" << endl;
					for (int i=0; i<nP; i++){
						cout << endl << "Posicion: " << i+1 << endl;
						cout << "Nombre: " << productos[i].nombre << endl;
						cout << "Precio: " << productos[i].precio << endl;
					}
				}
				break;
			}
			
			case 'C': {
				if (nP == 0){
					cout << endl << "No hay productos registrados aun" << endl;
				} else {
					cout << endl << "------------ BUSCAR PRODUCTO -------------" << endl;
					cout << "Ingrese el nombre del producto a buscar: ";
					
					string nombrebuscar;
					getline(cin, nombrebuscar);
					
					int cont;
					cont = 0;
					
					for (int i=0; i<nP; i++){
						if (productos[i].nombre == nombrebuscar){
							cout << endl << "Producto encontrado en la posicion: " << i+1 << endl;
							cout << "Nombre: " << productos[i].nombre << endl;
							cout << "Precio: " << productos[i].precio << endl;
							cont = cont + 1;
						}
					}
					
					if (cont == 0){
						cout << endl << "No se encontro ningun producto con ese nombre" << endl;
					}
				}	
				break;
			}
				
			case 'D': {
				if (nP == 0){
					cout << endl << "No hay productos registrados aun" << endl;
				} else {
					cout << endl << "--------- ACTUALIZAR PRODUCTO -----------" << endl;
					cout << "Ingrese la posicion del producto a actualizar (1 al " << nP << "): ";
					
					int pos;
					cin >> pos;
					cin.ignore();
					
					if (pos<1 || pos>nP){
						cout << endl << "Posicion invalida" << endl;
					} else {
						int ind;
						ind = pos - 1;
						
						cout << endl << "Ingrese los nuevos datos:" << endl;
						cout << "Nombre: ";
						getline(cin, productos[ind].nombre);
						cout << "Precio: ";
						cin >> productos[ind].precio;
						cin.ignore();
						cout << endl << "Producto actualizado" << endl;
					}
				}
				break;
			}
				
			case 'E': {
				if (nP == 0){
					cout << endl << "No hay productos registrados aun" << endl;
				} else {
					cout << endl << "----------- ELIMINAR PRODUCTO ------------" << endl;
					cout << "Ingrese la posicion del producto a eliminar (1 al " << nP << "): ";
					
					int pos;
					cin >> pos;
					cin.ignore();
					
					if(pos<1 || pos>nP){
						cout << endl << "Posicion invalida" << endl;
					} else{
						int ind;
						ind = pos - 1;
						
						for (int i=ind; i<nP-1; i++){
							productos[i] = productos[i+1];
						}
						nP = nP - 1;
						cout << endl << "Producto eliminado" << endl;
					}
				}
				break;
			}
				
			case 'F': {
				
				break;
			}
			
			case 'G': {
				
				break;
			}
				
			case 'H': {
				
				break;
			}
			
			case 'S': {
				
				break;
			}	
			
			default:
				
				break;
		}
		
		
	} while (opcion != 'S');
	
	cout << endl << "Programa finalizado, hasta luego" << endl;
	
	return 0;
}
