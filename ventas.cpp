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
		
		
		
	} while (opcion != 'S');
	
	cout << endl << "Programa finalizado, hasta luego" << endl;
	
	return 0;
}
