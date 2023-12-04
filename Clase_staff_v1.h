#include <iostream>
#include <string>

using namespace std;

class staff{
	private: // Atributos
		string nombre;
		double salario;
		
				
	public: // Metodos
	//Nombre y salario ingresar
	void datos_empleado(){
		
		cout << "Nombre nuevo: ";
		cin >> nombre;
		
		cout << "salario inicial: $";
		cin >> salario;
	}
	
	//permite ver los datos del usuario
	void Consultar(){
		cout << "Nombre: " << nombre << endl;
		cout << "salario inicial: $" << salario << endl;
		//cout << "id: " << id << endl;
	}
	
	// Permite agregar dinero a los bonos gracias a los bonos
	void salarios_y_bonos(){
		int horas_extra = 0;
		cout << "Nombre: " << nombre << endl;
		cout << "salario inicial: $" << salario << endl;
		cout << "Horas extras: ";
		cin >> horas_extra;
		salario = salario + (horas_extra * 200);
		cout << "nuevo salario: $" << salario << endl;
	}
};

