// Archivo main para el programa
// En este codigo esta:
//	1. Ciclo de seguridad
//  2. Procedimiento de la clase staff
#import <iostream>
#import <string>
#import "Clase_staff_v1.h"

using namespace std;

//variables (Las variables que se usan en el sistema de seguridad y menu)
string usuario = "";
string contrasena = "";
bool acceso = false;
int tamano_lista = 3;
char opcion;

// codigo main	
int main(){
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
	
	//Menu de la aplicacion (menu en el que muestra las distintas opciones y si el usuario ingresa alguna,)
	//						(se realiza la accion que pide el usuario)
	do{
	    cout << "a)Agregar nuevo \nb)Consultar \nc)Modificar \nd)Salarios y Bonos \ne)Salir \nOpcion: ";
	    cin >> opcion;
	
	    switch (opcion){
		    case 'a':{
				cout << "Consiguio acceso a" << endl;
		        break;
		    }
		
		    case 'b':{
	  			cout << "Consiguio acceso b"  << endl;
		        break;
		    }
		
		    case 'c':{
		    	cout << "Consiguio acceso c"  << endl;
		        break;
		    }
		    
		    case 'd':{
		    	cout << "Consiguio acceso d"  << endl;
		        break;
		    }
		
		}
	}while (opcion != 'e');
	
	return 0;
}
