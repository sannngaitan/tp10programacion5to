#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
	public:
    	Persona(string nombre, int edad) : nombre(nombre), edad(edad) {}

		
		int getEdad() const {
			return edad;
		}
		
		string getNombre() const {
			return nombre;
		}
		
		void mostrarDatos() const {
			cout<<"Nombre: "<<nombre<<endl;
			cout<<"Edad: "<<edad<<endl;
		}
};

int main(){
	
	vector<Persona> personas;
	
	string nombre;
	int edad;
	
	int numPersonas;
	cout<<"Ingrese el numero de personas: ";
	cin>>numPersonas;
	
	for(int i=0; i<numPersonas; i++){
		
		cout<<"Ingrese el nombre de la persona: ";
		cin>>nombre;
		cout<<"Ingrese la edad de la persona: ";
		cin>>edad;
		
		personas.push_back(Persona(nombre, edad));
	}
	
	for(int i=0; i < personas.size() - 1; i++){
		for(int j=0; j < personas.size() - i - 1; j++){
			if(personas[j].getEdad() > personas[j + 1].getEdad()) {
				swap(personas[j], personas[j+1]);
			}
		}
	}
	
	cout<<"Personas ordenadas por edad (ascendente): "<<endl;
	for(int i=0; i<personas.size(); i++){
		personas[i].mostrarDatos();
	}
	
	
}
