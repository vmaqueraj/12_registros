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
	
	
	return 0;
}
