#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Empleado {
	private:
		string nombre;
		int salario;
		string departamento;
	public:
		
		string getNombre() const {
			return nombre;
		}
		int getSalario() const {
			return salario;
		}
		string getDepartamento() const {
			return departamento;
		}
		
		void mostrarDatos() const {
			cout<<"Nombre: "<<nombre<<endl;
			cout<<"Salario: "<<salario<<endl;
			cout<<"Departamento: "<<departamento<<endl;
		}
		
		Empleado(string n, int s, string d) : nombre(n), salario(s), departamento(d) {}
};

int main() {	
			vector<Empleado> empleados;
			int c;
			cout<<"Cuantas personas desea ingresar: ";
			cin>>c;
			
			for(int i=0; i<c; i++){
				string nombre, departamento;
				int salario;
				cout<<i+1<<" - "<<"Ingrese el nombre de la persona: ";
				cin>>nombre;
				cout<<i+1<<" - "<<"Ingrese el salario de la persona: ";
				cin>>salario;
				cout<<i+1<<" - "<<"Ingrese el departamento de la persona: ";
				cin>>departamento;
				
				empleados.push_back(Empleado(nombre, salario, departamento));
			}
			
			for(int i=0; i < empleados.size() - 1; i++){
			for(int j=0; j < empleados.size() - i - 1; j++){
			if(empleados[j].getSalario() < empleados[j + 1].getSalario()) {
				swap(empleados[j], empleados[j+1]);
					}
				}
			}
			cout<<"Empleados ordenados por salario (mayor a menor): "<<endl;
			for(int i=0; i<empleados.size(); i++){
			empleados[i].mostrarDatos();
			}
}
