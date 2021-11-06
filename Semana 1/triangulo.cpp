#include <iostream>
using namespace std;

class Rectangulo{
	int ancho, alto;								// atributos private por defecto
	public:											// Operaciones o funciones miembros de la clase
			Rectangulo();							// Constructor por defecto
			Rectangulo(int, int);					// Constructor que tomo dos parámetros
			int area()	{return  ancho * alto; }		// Operación calcular el área
};

Rectangulo::Rectangulo(){
	ancho = 5;
	alto = 2;
}

Rectangulo::Rectangulo(int x, int y){
	ancho = x;
	alto = y;
}

class Circulo{
	double radio;													//Atributo Privado
	public:
		Circulo(double r) { radio = r; }							// Constructor que requiere un valor de radio
		double circunferencia() { return 2*radio*3.14159265; }		// Operación o función miembro para calcular circunferencia
};

int main(){
	Rectangulo rectangulo1(3,4);
	Rectangulo rectangulo2(5,6);
	Rectangulo rectangulo3(7,3);
	Rectangulo rectangulo4;
	
	cout << "Area rectangulo 1: " << rectangulo1.area() << endl;
	cout << "Area rectangulo 2: " << rectangulo2.area() << endl;
	cout << "Area rectangulo 3: " << rectangulo3.area() << endl;
	cout << "Area rectangulo 4: " << rectangulo4.area() << endl;
	
	Circulo foo (10.0);			// Inicialización funcional del objeto ***
	Circulo bar = 20.0;			// Inicialización por asignación
	Circulo baz {30.0};			// Inicialización uniforme
	Circulo lux = {40.0};		// Plain Old Data (POD-like)
	
	cout << "Circunferencia de foo: " << foo.circunferencia() << endl;
	cout << "Circunferencia de bar: " << bar.circunferencia() << endl;
	cout << "Circunferencia de baz: " << baz.circunferencia() << endl;
	cout << "Circunferencia de lux: " << lux.circunferencia() << endl;
	
	Rectangulo *rectanglep1, *rectanglep2, *rectanglep3;
	rectanglep1 = &rectangulo1;
	cout << &rectangulo1 << endl;
	rectanglep2 = new Rectangulo(5,7);
	rectanglep3 = new Rectangulo[2]{{2,5},{3,6}};	//Arreglo de rectangulos
	cout << "Area rectangulo1: " << rectangulo1.area() << endl;
	cout << "Area *rectanglep1: " <<  rectanglep1->area() << endl;
	cout << "Area *rectanglep2: " <<  rectanglep2->area() << endl;
	cout << "Area rectanglep3[0]: " << rectanglep3[0].area() << endl;
	cout << "Area rectanglep3[0]: " << rectanglep3[1].area() << endl;
	
	delete rectanglep2;
	delete[] rectanglep3;
	
	
	return 0;
}
