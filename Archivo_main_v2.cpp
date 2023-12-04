// Paolo Martini, Carlos Olamendi

// Archivo main para el programa
// En este codigo esta:
//	1. Ciclo de seguridad
//  2. Procedimiento de la clase staff
#include <iostream>
#include <string>
#include "Clase_staff_v1.h"

using namespace std;

//variables (Las variables que se usan en el sistema de seguridad y menu)
string usuario = "";
string contrasena = "";
bool acceso = false;
int tamano_lista = 3;
char opcion;


// codigo main	
int main(){

	string contra="";
	string user="";
	//Arreglos (Listas del sistema de seguridad que tiene a los usurios y contrasenas)
	string usuario_list[tamano_lista];
	usuario_list[0] = "Aragorn";
	usuario_list[1] = "Gandalf";
	usuario_list[2] = "Smaug";
	string contrasena_list[tamano_lista];
	contrasena_list[0] = "Montaras123";
 	contrasena_list[1] = "MagoBlanco";
	contrasena_list[2] = "Dragon_oro";
	
	//Seguridad Implementada (El sistema pide que se ingrese un usuario y si elusuario está en la lista de usuarios,)
	//						 (se va a checar que la contrasena ingresada también este en la misma posicion que la del usuario.)
	while(acceso != true){
		// inicio del prgrama seguridad
		cout << "Usuario: ";
		cin >> usuario;
		cout << "Contrasena: ";
		cin >> contrasena;

		for (int i = 0; i < tamano_lista; ++i){
			if(usuario_list[i] == usuario){
				if(contrasena_list[i] == contrasena){
					//cout << "Consiguio acceso uwu" << endl;
					acceso = true;
					break;
				}
			}
		}
	}
	
	int cantidad_empleados = 50;
	staff perfil_empleado[cantidad_empleados]; //lista objeto
	int id = 0;
	//Menu de la aplicacion (menu en el que muestra las distintas opciones y si el usuario ingresa alguna,)
	//						(se realiza la accion que pide el usuario)
	do{
		//Seleccion de opcione en el menu
	    cout << "a)Agregar nuevo \nb)Consultar \nc)Salarios y Bonos \nd)Modificar \ne)Salir \nOpcion: ";
	    cin >> opcion;
		
	    switch (opcion){
		    //Permite ingresar nuevos empleados 
			case 'a':{
		    	for (int i = 0; i < cantidad_empleados; ++i){
				staff empleado; //objeto
				cout << "Empleado id: " << id << endl;
				empleado.datos_empleado();
				perfil_empleado[i] = empleado;
				id = id + 1;
				}
		        break;
		    }
			// Permite consultar los datos del empleado
		    case 'b':{
		    	cout << "Empleado id: ";
		    	cin >> id;
		    	perfil_empleado[id].Consultar();
		        break;
		    }
		    
			// Permite aumentar el salario del empleado por los bonos
		    case 'c':{
		    	cout << "Empleado id: " << endl;
		    	cin >> id;
		    	perfil_empleado[id].salarios_y_bonos();
		        break;
		    }
		    // Permite cambiar la informacion de un empleado pero no cambia de posicion
		    case 'd':{
		    	cout << "Empleado id" << endl;
		    	cin >> id;
		    	perfil_empleado[id].datos_empleado();
		        break;
		    }
		
		}
	}while (opcion != 'e');
	
	return 0;
}
