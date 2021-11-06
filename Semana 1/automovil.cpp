#include <iostream>

using namespace std;

class Automovil{ // Operaciones, prototipos de las funciones
	public:
		Automovil();
		void set_detalles();
		void set_numPuertas( int puertas );
		void get_detalles() const;
		int get_numPuertas() const;
		
	private:			// Atributos
		string fabricante;
		int numPuertas;
		int numCilindros;
		int tamanioMotor;
};
// Implementaciones de las operaciones
//Constructor por defecto
Automovil::Automovil(){
	numPuertas = 0;
	numCilindros = 0;
	tamanioMotor = 0;
}

void Automovil::set_detalles(){
	cout << "Introduce el fabricante: ";
	cin >> fabricante;
	cout << "Cuantas puertas? ";
	cin >> numPuertas;
	cout << "Cuantos cilindros? ";
	cin >> numCilindros;
	cout << "Que tamanio de motor? ";
	cin >> tamanioMotor;
}

void Automovil::set_numPuertas(int puertas){
	this->numPuertas = puertas;
}

void Automovil::get_detalles() const{
cout << "Fabricantes: " << fabricante << endl;
cout << "Puertas: " << numPuertas << endl;
cout << "Cilindros: " << numCilindros << endl;
cout << "Motor: " << tamanioMotor << endl;
}

int Automovil::get_numPuertas() const{
cout << "Puertas: " << numPuertas << endl;
}

int main(){
	Automovil miCarro;
	miCarro.set_detalles();
	
	Automovil carroDeErick;
	carroDeErick.set_detalles();
	
	Automovil carroDeManuel;
	carroDeManuel.set_detalles();
	
	miCarro.get_detalles();
	carroDeErick.get_detalles();
	carroDeManuel.get_detalles();
	
	return 0;
}
