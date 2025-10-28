#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Libro{
	private:
		string titulo;
		string autor;
		int anio;
	public:
		Libro(string titulo, string autor, int anio) : titulo(titulo), autor(autor), anio(anio) {}
		
		string getTitulo() const {
			return titulo;
		}
		
		string getAutor() const {
			return autor;
		}
		
		int getAnio() const {
			return anio;
		}
		
		void mostrarDatos() const {
			cout<<"Titulo: "<<titulo<<endl;
			cout<<"Autor: "<<autor<<endl;
			cout<<"Año publicacion: "<<anio<<endl;
		}
};

int main(){
			vector<Libro> libros;
			int c;
			cout<<"Cuantos libros desea ingresar: ";
			cin>>c;
			
			for(int i=0; i<c; i++){
				string titulo, autor;
				int anio;
				cin.ignore();
				cout<<i+1<<" - "<<"Ingrese el titulo del libro: ";
				getline(cin, titulo);
				cout<<i+1<<" - "<<"Ingrese el autor del libro: ";
				getline(cin, autor);
				cout<<i+1<<" - "<<"Ingrese el año del libro: ";
				cin>>anio;
				
				libros.push_back(Libro(titulo, autor, anio));
			}
			
			for(int i=0; i < libros.size() - 1; i++){
			for(int j=0; j < libros.size() - i - 1; j++){
			if(libros[j].getAnio() > libros[j + 1].getAnio()) {
				swap(libros[j], libros[j+1]);
					}
				}
			}
			cout<<"Libros ordenados por año (mas antiguo a mas reciente): "<<endl;
			for(int i=0; i<libros.size(); i++){
			libros[i].mostrarDatos();
			}	
}
