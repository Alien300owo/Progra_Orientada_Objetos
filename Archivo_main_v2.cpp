// Archivo main para el programa
// En este codigo esta:
//	1. Ciclo de seguridad
//  2. Procedimiento de la clase staff
#import <iostream>
#import <string>
#import "Clase_staff_v1.h"

using namespace std;

//variables
string usuario = "";
string contrasena = "";
bool acceso = false;
int tamano_lista = 3;
// codigo main	
int main(){
	//Arreglos
	string usuario_list[tamano_lista];
	usuario_list[0] = "Aragorn";
	usuario_list[1] = "Gandalf";
	usuario_list[2] = "Smaug";
	string contrasena_list[tamano_lista];
	contrasena_list[0] = "Montaras123";
 	contrasena_list[1] = "MagoBlanco";
	contrasena_list[2] = "Dragon_oro";
	
	//Seguridad Implementada
	while(acceso != true){
		// inicio del prgrama
		cout << "Usuario: ";
		cin >> usuario;
		cout << "Contrasena: ";
		cin >> contrasena;

		for (int i = 0; i < tamano_lista; ++i){
			if(usuario_list[i] == usuario){
				if(contrasena_list[i] == contrasena){
					cout << "Consiguio acceso uwu";
					acceso = true;
					break;
				}
			}
		}
	}
	

	
	
	
	
	return 0;
}
