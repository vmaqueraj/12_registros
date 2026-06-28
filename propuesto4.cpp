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
	
	for (int i=0; i<n; i++){
		if (atletas[i].pais == buscarpais){
			cout << endl << "Nombres: " << atletas[i].nombres << endl;
			cout << "Disciplina: " << atletas[i].disciplina << endl;
			cout << "Medallas: " << atletas[i].medallas << endl;
			
			cont = cont + 1;
			
			if (cont == 1){
				mayor = i;
			}
			
			else if (atletas[i].medallas > atletas[mayor].medallas){
				mayor = i;
			}
		}
	}
	
	cout << endl << "-----------------------------------------------" << endl;
	
	if (cont == 0){
		cout << endl << "No hay atletas resgistrados en ese pais" << endl;
	}
	
	else {
		cout << endl << "Atleta con mayor numero de medallas en " << buscarpais << endl;
		cout << "Nombres: " << atletas[mayor].nombres << endl;
		cout << "Disciplina: " << atletas[mayor].disciplina << endl;
		cout << "Medallas: " << atletas[mayor].medallas << endl;
	}
	
	cout << endl << "--------------------------------------------------" << endl;
	
	return 0;
}
