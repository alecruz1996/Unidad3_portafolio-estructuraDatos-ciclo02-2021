//Alejandro Leonel Cruz Carranza #CC104417
#include <iostream> 
using namespace std; 

class CuentaBancaria{								// Clase CuentaBancaria
	int numeroCuenta;					// atributos private por defecto
	string nombreTitular;			// atributos private por defecto
	double saldo;									// atributos private por defecto
	public:													// Operaciones o funciones miembros de la clase
		CuentaBancaria();									// Constructor
		string getNombreTitular(){return nombreTitular;}	// Operacion obtener atributo
		int getNumeroCuenta(){return numeroCuenta;}			// Operacion obtener atributo
		double getSaldo(){return saldo;}					// Operacion obtener atributo
};

CuentaBancaria::CuentaBancaria(){						//Definiendo funcion CuentaBancaria con la Clase CuentaBancaria
	this -> nombreTitular = "Luis Omar Anaya Cortez";			// Atributo Nombre
	this -> numeroCuenta  = 392044886659;						// Atributo Cuenta
	this -> saldo = 125;										// Atributo Saldo
}



//Declarando el metodo para invocar los mentodos del programa
int leerSeleccionUsuario(){
	int eleccion;
	cout << "==================================" << endl;
	cout << "==================================" << endl;
	cout << "" << endl;
	cout << "++++ Seleccione el tipo de Operacion Requerida ++: " << endl;
	cout << "1 - Imprimir Saldo" << endl;
	cout << "2 - Depositar Dinero" << endl;
	cout << "3 - Retirar Dinero" << endl;


	while(!(cin >> eleccion) || eleccion < 1 || eleccion > 3){
		cout << "Opcion no valida. Ingrese un valor entre 1 y 3: " << endl;
		cin.clear();
		cin.ignore(10000, '\n');
	}
	return eleccion;
}



// Logica de Funciones

void muestraOperaciones(int tipo){ 
	CuentaBancaria getSaldo; // Declarando o llamando los objetos de la clase
	double importeDeposito, importeRetiro; // Variables para trabajar en las funciones

	switch(tipo){

		
		case 1: 
		cout << "" << endl;
		cout << "+++++++++++++++++++++++++++++++++" << endl;
		cout << "Su saldo actual es: " << getSaldo.getSaldo() << " $" << endl;
		cout << "+++++++++++++++++++++++++++++++++" << endl;
		break;
		
		case 2: 
		cout << "Ingrese el importe Deposito" << endl;
		while(!(cin >> importeDeposito) || importeDeposito < 0) {
		cout << "Opcion no valida. Ingrese un valor Positivo " << endl;
		cin.clear();
		cin.ignore(10000, '\n');
	}	
		cout << "" << endl;
		cout << "+++++++++++++++++++++++++++++++++" << endl;
		cout << "Su Saldo anterior era: " << getSaldo.getSaldo()  << " $" << endl;
		cout << "El importe abonado a su cuenta es " << importeDeposito  << " $" << endl;
		cout << "Su nuevo saldo es: " << getSaldo.getSaldo() + importeDeposito << " $" << endl;
		cout << "+++++++++++++++++++++++++++++++++" << endl;
		break;
		
		
		case 3: 
		cout << "Ingrese el importe Retiro" << endl;
		while(!(cin >> importeRetiro) || importeRetiro < 0 || importeRetiro > getSaldo.getSaldo()) {
		cout << "Opcion no valida. Ingrese un valor positivo y menor o igual  al saldo actual: " << getSaldo.getSaldo() << endl;
		cin.clear();
		cin.ignore(10000, '\n');
	}
		cout << "" << endl;
		cout << "+++++++++++++++++++++++++++++++++" << endl;
		cout << "Su Saldo anterior era: " << getSaldo.getSaldo()  << " $" << endl;
		cout << "El importe retirado a su cuenta es " << importeRetiro  << " $" << endl;
		cout << "Su nuevo saldo es : " << getSaldo.getSaldo() - importeRetiro << " $" << endl;
		cout << "+++++++++++++++++++++++++++++++++" << endl;
		break;

		
}
}


int main(){
	int eleccion;
	CuentaBancaria getSaldo;
	CuentaBancaria getNumeroCuenta;
	CuentaBancaria getNombreTitular;
	
	cout << "==================================" << endl;
	cout << "==================================" << endl;
	cout << "Bienvenido a su sistema de cuenta Bancaria: " <<  endl;
	cout << "Nombre Titular: " << getNombreTitular.getNombreTitular() << endl;
	cout << "Numero Cuenta: " << getNumeroCuenta.getNumeroCuenta() << endl;
	eleccion = leerSeleccionUsuario();
	muestraOperaciones(eleccion);
	
	
	return 0;
}


