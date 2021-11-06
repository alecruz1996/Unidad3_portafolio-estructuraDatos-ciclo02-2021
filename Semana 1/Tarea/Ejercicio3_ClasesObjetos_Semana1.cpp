//Alejandro Leonel Cruz Carranza #CC104417
#include <iostream> 
using namespace std; 
#include <string.h>
#include <conio.h>

 class Personaje{								

	private:
		int puntosVida;
		string nombre;
		
	public:
		Personaje(int puntosV, string nom);
				
		void recibirGolpe(int puntosPerdidos);
		string estaVivo();
		int getPuntosVida();
		string getNombre();
		void comer(int puntosGanados);
			
};

// Implementacion Constructor
Personaje::Personaje(int puntosV, string nom){
	this->puntosVida = puntosV;
	this->nombre = nom;
	}
	
	void Personaje::recibirGolpe(int puntosPerdidos){
		
		this ->puntosVida -= puntosPerdidos;
	}
	
	void Personaje::comer(int puntosGanados){
		this ->puntosVida += puntosGanados;
	}

	int Personaje::getPuntosVida(){
		return this->puntosVida;
	}
	
	string Personaje::getNombre(){
		return this->nombre;
	}
	
	
	string Personaje::estaVivo(){
		if(puntosVida>0){
			return "TRUE";
		}
		else {
			return "FALSE";
		}
	}







//Declarando el metodo para leer la vida
int leerInputVida(){
	int inputVida;
	cout << "==================================" << endl;
	cout << "==================================" << endl;
	cout << "" << endl;
	cout << "++++ Bienvenid@ al juego de Personaje" << endl;
	cout << "Ingrese la Vida que el personaje tendra" << endl;

	while(!(cin >> inputVida) || inputVida < 100){
		cout << "Error! Debe ingresar una vida positiva mayor a 100" << endl;
		cin.clear();
		cin.ignore(10000, '\n');
	}
	return inputVida;
}


//Declarando el metodo para leer los golpes recibidos
int leerInputGolpes(){
	int inputGolpes;
	cout << "==================================" << endl;
	cout << "Ingrese los golpes recibidos" << endl;

	while(!(cin >> inputGolpes) || inputGolpes < 0){
		cout << "Error! Los golpes no deben ser negativos" << endl;
		cin.clear();
		cin.ignore(10000, '\n');
	}
	return inputGolpes;
}

//Declarando el metodo para leer la comida de puntos
int leerInputComida(){
	int inputComida;
	cout << "==================================" << endl;
	cout << "Ingrese los puntos en Comida" << endl;

	while(!(cin >> inputComida) || inputComida < 0){
		cout << "Error! Los puntos en comida no deben ser negativos" << endl;
		cin.clear();
		cin.ignore(10000, '\n');
	}
	return inputComida;
}




int main(){
	
	int inputVida;
	int eleccion;
	int inputGolpes;
	int inputComida;
	
	inputVida = leerInputVida();
	inputGolpes = leerInputGolpes();
	inputComida = leerInputComida();
	
	
	Personaje personajeMomo(inputVida, "Alejandro Leonel Cruz Carranza");
	cout << "Nombre del personaje Momo: " << personajeMomo.getNombre() << endl;	
	cout << "Puntos de Vida Inicial personaje Momo: " << personajeMomo.getPuntosVida() << endl; 
	
	personajeMomo.recibirGolpe(inputGolpes);
	cout << "El personaje Momo recibio " << inputGolpes << " golpes, bajando su vida a:  " << personajeMomo.getPuntosVida() << " puntos" << endl;
	
	personajeMomo.comer(inputComida);	
	cout << "El personaje Momo gano " << inputComida << " comidas, subiendo su vida a: " << personajeMomo.getPuntosVida() << " puntos" << endl;

 
	
 	cout << "El personaje tiene un status " << personajeMomo.estaVivo()  << endl;

	 
	return 0;
}



