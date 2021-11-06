#ifndef RECTANGULO
#define RECTANGULO
//Una clase es una representación de un objeto del mundo real
// Esta formada por atributos (pripiedades | variables) y métodos (acciones | funciones | procedimientos)
// Especificacion de la clase
class Rectangulo{
	private:		// atributos que solo pueden ser usados dentro de la clase
		double base;
		double altura;
	public:								// metodos que se pueden usar desde fuera de la clase
		Rectangulo(double b, double h); // constructor, tiene el mismo nombre que la clase
		double calcularArea();			// Prototipos de funciones | metodos
		double calcularPerimetro();
		double getBase();
		double getAltura();
};
// Implementacion de los metodos
Rectangulo::Rectangulo(double b, double h){
	this->base = b;			//Asigno el valor que recibo como parametro "b" a la "base" del objeto
	this->altura = h;		//Asigno el valor que recibo como parametro "h" a la "altura" del objeto
};
// Calcular el area de un rectangulo
double Rectangulo::calcularArea(){
	return this->base * this->altura;
}
// Calcular el perimetro de un rectangulo
double Rectangulo::calcularPerimetro(){
	return 2 * (this->base * this->altura);
}
//Devolver la base
double Rectangulo::getBase(){
	return this->base;
}
//Devolver la altura
double Rectangulo::getAltura(){
	return this->altura;
}

#endif




