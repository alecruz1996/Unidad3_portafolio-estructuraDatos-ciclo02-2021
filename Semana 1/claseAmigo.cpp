// Ejemplo de clase amigo

#include <iostream>
using namespace std;

class Cuadrado; //prototipo de clas

class Rectangulo{
double ancho, alto;
	public:
		double area(){ return (ancho * alto); } // Calcular el area de un rectangulo
		void convertir (Cuadrado a);			//Convertir un cuadrado en rectangulo
};

class Cuadrado{
	friend class Rectangulo;		// Es una clase relacionada que puede acceder elementos privados de la otra
	private:
		double lado;
	public:
		Cuadrado(double a) : lado(a) {} // Constructor
};

void Rectangulo::convertir(Cuadrado a){
	ancho = a.lado;
	alto = a.lado;
} 

int main(){
	Rectangulo r1;	// cramos un rectangulo vacío
	Cuadrado c1(4);	// Creamos un cuadrado con cada lado midiendo 4 unidades
	r1.convertir(c1); // Convertimos el cuadrado en un rectangulo
	cout << r1.area();	// Ahora podemos utilizar los metodos de la clase rectangulo
	return 0;
}











