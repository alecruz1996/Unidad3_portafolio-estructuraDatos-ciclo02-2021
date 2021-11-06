//Alejandro Leonel Cruz Carranza #CC104417
#include <iostream> 
using namespace std; 

class Persona{												// Clase Persona
	string nombres, apellidos, nombreCompleto;								// atributos private por defecto
	int anioNacimiento;										// atributos private por defecto
	
	public:													// Operaciones o funciones miembros de la clase
		Persona();									// Constructor
		string getNombres(){return nombres;}	// Operacion obtener Nombres
		string getApellidos(){return apellidos;}	// Operacion obtener Apellidos
		string getNombreCompleto(){return nombreCompleto;}	// Operacion obtener Apellidos
		int getAnioNacimiento(){return anioNacimiento;}
};

Persona::Persona(){						//Definiendo funcion CuentaBancaria con la Clase CuentaBancaria
	nombres = "Luis Omar";			// Atributo Nombre
	apellidos = "Anaya Cortez";			// Atributo Apellido
	anioNacimiento = 1996;				// Atributo Nacimiento
	nombreCompleto  = nombres + " " + apellidos;
}

int main(){
	int edadActual;
	Persona getNombres;
	Persona getApellidos;
	Persona getNombreCompleto;
	Persona getAnioNacimiento;
	
	cout << "==================================" << endl;
	cout << "==================================" << endl;
	cout << "Bienvenido al sistema de informacion " <<  endl;
	cout << "Nombres: " << getNombres.getNombres() << endl;
	cout << "Apellidos: " << getApellidos.getApellidos() << endl;
	cout << "Nombre Completo: " << getNombreCompleto.getNombreCompleto() << endl;
	cout << "Edad Actual: " << 2021 - getAnioNacimiento.getAnioNacimiento()<< endl;

	return 0;
}


