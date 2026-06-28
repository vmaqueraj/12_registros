#include <iostream>
#include <string>
using namespace std;

struct Atleta {
	string nombres;
	string pais;
	string disciplina;
	int medallas;
};

int main (){
	int n;
	Atleta atletas[100];
	
	cout << "Ingrese la cantidad de atletas a registrar: ";
	cin >> n;
	cin.ignore();
	
	for (int i=0; i<n; i++){
		cout << endl << "Atleta " << i+1 << endl;
		cout << "Nombres: ";
		getline(cin, atletas[i].nombres);
		cout << "Pais: ";
		getline(cin, atletas[i].pais);
		cout << "Disciplina: ";
		getline(cin, atletas[i].disciplina);
		cout << "Numero de medallas: ";
		cin >> atletas[i].medallas;
		cin.ignore();
	}
	
	cout << "----------------------------------------------" << endl;
	
	// Buscar por pais
	string buscarpais;
	
	cout << endl << "Ingrese el nombre del pais a consultar: ";
	getline(cin, buscarpais);
	
	// Buscar el atleta con mas medallas dentro del pais
	int mayor, cont;
	mayor = 0;
	cont = 0;
	
	cout << endl << "ATLETAS DEL PAIS " << buscarpais << endl;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
