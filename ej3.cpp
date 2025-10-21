#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Rectangulo {
	private:
		float base;
		float altura;
	public:
		Rectangulo(float base, float altura) : base(base), altura(altura) {}
		
		float getBase() const {
			return base;
		}
		
		float getAltura() const {
			return altura;
		}
		
		void mostrarDatos() const {
			float perimetro;
			float area;
			
			perimetro = base+altura;
			area = base*altura;
			
			cout<<"Base del rectangulo: "<<base<<endl;
			cout<<"Altura del rectangulo: "<<altura<<endl;
			cout<<"Perimetro del rectangulo: "<<perimetro<<endl;
			cout<<"Area del rectangulo: "<<area<<endl<<endl;
		}
};

int main(){
	vector<Rectangulo> rectangulos;
	
	float base;
	float altura;
	
	int numRectangulos;
	cout<<"Ingrese el numero de rectangulos: ";
	cin>> numRectangulos;
	
	for(int i=0; i<numRectangulos; i++){
		
		cout<<"Ingrese la base: ";
		cin>>base;
		cout<<"Ingrese la altura: ";
		cin>>altura;
		
		rectangulos.push_back(Rectangulo(base, altura));
	}
	
	cout<<"Rectangulos: "<<endl;
	for(int i=0; i<rectangulos.size(); i++){
		rectangulos[i].mostrarDatos();
	}
}
