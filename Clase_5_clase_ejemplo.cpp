//Diagrama Ejemplo.
//-----------------------Cuenta de banco---------------------(clase)
//--------------------------Atributos------------------------
//						 float: saldo
//						 string: nombre
//---------------------------Metodos------------------------- set() void, get() "pa cada uno"
//                       depositar(float);
//                       transferir(float);
//                       retirar(float);
//                       consultar();
//-----------------------------------------------------------


#import <iostream>
#import <string>
using namespace std;


class cdbanco{
	private:
		string nombre;
		double saldo;
	
	public:
		
		
	//Nombre--------
	void setNombre(string n){
		nombre = n;
	}
	string getNombre(){
		return nombre;
	}
	
	//Saldo--------
	void setSaldo(double s){
		saldo = s;
	}
	double getSaldo(){
		return saldo;
	}
	
	//Metodo depositar
	void depositar(){
		string confirmar;
		int dinero;
		string error = "Error";
		
		cout << "Quieres depositar? responde si o no" << endl;
		cin >> confirmar;
		
		if(confirmar == "si"){
			cout << "Ingresa la cantidad" << endl;
			cin >> dinero;
			saldo = saldo + dinero; 
		}
	}
	
		//Metodo retirar
	void retirar(){
		string confirmar;
		int dinero;
		string error = "Error";
		
		cout << "Quieres retirar? responde si o no" << endl;
		cin >> confirmar;
		
		if(confirmar == "si"){
			cout << "Ingresa la cantidad" << endl;
			cin >> dinero;
			saldo = saldo - dinero; 
		}
	}
	
	
	
};


int main(){
	// Variables
	string n_usuario;
	double n_saldo;
	
	//Objeto
	cdbanco cuenta;
	
	cout << "ingresa el nombre: " << endl;
	cin >> n_usuario;
	
	cuenta.setSaldo(5000);
	cuenta.setNombre(n_usuario);
	
	cout << "Nombre: " << cuenta.getNombre() << endl;
	cout << "Saldo: $" << cuenta.getSaldo() << endl;
	
	cuenta.retirar();
	cuenta.depositar();
	cout << "Saldo: $" << cuenta.getSaldo() << endl;
	return 0;
}
