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
	
	
	
	
	return 0;
}
