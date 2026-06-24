#include <iostream>
#include <string>
using namespace std;

struct Libro{
	string titulo;
	string autor;
	string editorial;
	int anioPublicacion;
};


int main () {
	int n;
	Libro libros[100];
	
	cin>>n;
	
	for (int i=0; i<n; i++){
		
		getline(cin, libros[i].titulo);
		getline(cin, libros[i].autor);
		getline(cin, libros[i].editorial);
		getline(cin, libros[i].anioPublicacion);
		
	}
	
	for (int i=0; i<n; i++){
		
		
	}
	
	return 0;
}
