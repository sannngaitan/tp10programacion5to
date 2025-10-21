#include <iostream>
#include <vector>
#include <string>
using namespace std;

class CuentaBancaria {
	private:
		int numCuenta;
		string nomTitular;
		float saldo;
	public:
		CuentaBancaria(int numCuenta, string nomTitular, float saldo) : numCuenta(numCuenta), nomTitular(nomTitular), saldo(saldo) {}
		
		int getNumCuenta() const {
			return numCuenta;
		}
		
		string getNomTitular() const {
			return nomTitular;
		}
		
		float getSaldo() const {
			return saldo;
		}
		
		void depositar(float monto) {
			if(monto > 0){
				saldo += monto;
				cout<<"Deposito realizado correctamente."<<endl;
			}else{
				cout<<"Monto invalido."<<endl;
			}
		}
		
		void retirar(float monto) {
			if(monto <= 0){
				cout<<"Monto invalido."<<endl;
			}else if(monto > saldo){
				cout<<"Saldo insuficiente."<<endl;
			}else{
				saldo -= monto;
				cout<<"Retiro realizado correctamente."<<endl;
			}
		}
};

int main(){
	vector<CuentaBancaria> cuentas;
	
	int numCuenta;
	string nomTitular;
	float saldo;
	
	int numCuentas;
	cout<<"Cuantas cuentas bancarias quiere crear: ";
	cin>>numCuentas;
	
	for(int i=0; i<numCuentas; i++){
		cout<<"CUENTA "<<i+1<<" - Ingrese el numero de cuenta: ";
		cin>>numCuenta;
		cout<<"CUENTA "<<i+1<<" - Ingrese el nombre del titular: ";
		cin>>nomTitular;
		cout<<"CUENTA "<<i+1<<" - Ingrese el saldo de la cuenta: ";
		cin>>saldo;
		
		cuentas.push_back(CuentaBancaria(numCuenta, nomTitular, saldo));
	}
	
	int opcion;
	do{
		cout<<"\n----- MENU -----"<<endl;
		cout<<"1. Mostrar todas las cuentas"<<endl;
		cout<<"2. Depositar dinero"<<endl;
		cout<<"3. Retirar dinero"<<endl;
		cout<<"0. Salir"<<endl;
		cout<<"Seleccione una opcion: ";
		cin>>opcion;
		
		if(opcion == 1){
			cout<<"\nDatos de las cuentas bancarias:\n";
			for(int i=0; i<cuentas.size(); i++){
				cout<<"Numero de cuenta: "<<cuentas[i].getNumCuenta()<<endl;
				cout<<"Nombre del titular: "<<cuentas[i].getNomTitular()<<endl;
				cout<<"Saldo: "<<cuentas[i].getSaldo()<<endl;
				cout<<endl;
			}
		}
		else if(opcion == 2){
			int buscarCuenta;
			float monto;
			cout<<"Ingrese el numero de cuenta: ";
			cin>>buscarCuenta;
			
			bool encontrada = false;
			for(int i=0; i<cuentas.size(); i++){
				if(cuentas[i].getNumCuenta() == buscarCuenta){
					cout<<"Ingrese el monto a depositar: ";
					cin>>monto;
					cuentas[i].depositar(monto);
					encontrada = true;
					break;
				}
			}
			if(!encontrada){
				cout<<"No se encontro la cuenta."<<endl;
			}
		}
		else if(opcion == 3){
			int buscarCuenta;
			float monto;
			cout<<"Ingrese el numero de cuenta: ";
			cin>>buscarCuenta;
			
			bool encontrada = false;
			for(int i=0; i<cuentas.size(); i++){
				if(cuentas[i].getNumCuenta() == buscarCuenta){
					cout<<"Ingrese el monto a retirar: ";
					cin>>monto;
					cuentas[i].retirar(monto);
					encontrada = true;
					break;
				}
			}
			if(!encontrada){
				cout<<"No se encontro la cuenta."<<endl;
			}
		}
		else if(opcion == 0){
			cout<<"Saliendo del programa..."<<endl;
		}
		else{
			cout<<"Opcion invalida."<<endl;
		}
		
	} while(opcion != 0);	
}

