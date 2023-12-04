#include <iostream>
#include <string>

using namespace std;

class staff{
	private: // Atributos
		string nombre;
		double salario;
		int id;
		
				
	public: // Metodos
	//Nombre--------
	void datos_empleado(){
		cout << "Nombre: ";
		cin >> nombre;
		
		cout << "salario inicial: $";
		cin >> salario;
		
		cout << "id: ";
		cin >> id;
	}
	
	void Consultar(){
		cout << "Nombre: " << nombre << endl;
		cout << "salario inicial: $" << salario << endl;
		//cout << "id: " << id << endl;
	}
	
	void salarios_y_bonos(){
		int horas_extra = 0;
		cout << "salario inicial: $" << salario << endl;
		cout << "Horas extras: " <<;
		cin >> horas_extra;
		salario = salario + (horas_extra * 200);
		cout << "nuevo salario: $" << salario << endl;
	}
};

