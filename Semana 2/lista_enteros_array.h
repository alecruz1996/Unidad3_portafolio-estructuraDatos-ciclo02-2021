#ifndef LISTA_ENTEROS_H 
#define LISTA_ENTEROS_H
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::ostringstream;
using std::cout;
using std::endl;

class ListaEnteros {
private:
	int cuenta;
	int capacidad;
	int *items;
	void agrandar();
public:
ListaEnteros(int capacidad);
ListaEnteros ();
~ListaEnteros();
ListaEnteros (const ListaEnteros &otra);
bool estaVacia();
int tamano(); void insertar(int indice, int item);
void adjuntar(int item);
int obtener(int indice);
bool contiene (int item);
int remover(int indice);

string comoCadena();
};

// Constructor
ListaEnteros::ListaEnteros(int capacidad) { 
cout << "Creando una lista vacia..." << endl;
this->cuenta = 0;
this->capacidad = capacidad;
this->items = new int[capacidad];
cout << " La lista tiene capacidad para " << this->capacidad << " elementos" << endl;
}

ListaEnteros::ListaEnteros (): ListaEnteros (4) {}

ListaEnteros::~ListaEnteros() {
cout << "Destruyendo la lista..." << endl; 
delete[] items; }

ListaEnteros::ListaEnteros (const ListaEnteros &otra) { 
cout << "Copiando una lista desde otra..." << endl;
this->cuenta = otra.cuenta;
this->capacidad = otra.capacidad;
this->items = new int[capacidad];
for (int i = 0; i < this->cuenta; i++) this->items[i] = otra.items[i]; }

// Esto Lo Liste vacia? 
bool ListaEnteros::estaVacia() { 
cout << "Comprobando si la lista esta vacía..." << endl;
return this->cuenta == 0;
}

//Tamano de la lista
ListaEnteros::tamano() { 
cout << "Obteniendo al tanano de la lista ..." << endl;
return this->cuenta;
}

void ListaEnteros::agrandar() {
cout << "Duplicando el tamaño de la lista..." << endl;
int *temp = this->items; 
this->capacidad *= 2;
this->items = new int[capacidad];
for (int i = 0; i < cuenta; i++) 
this->items[i] = temp[i];
delete[] temp;
cout << "La lista tiene capacidad para " << this->capacidad << " elementos" << endl;
}

// Insertar un elemento en un indice especifico
void ListaEnteros::insertar(int indice, int item) {
///Validar el indice 
if (indice < 0 || indice > this->cuenta) throw "Indice fuera de rango";

// Agrandar La Lista si el elemento no cabe
if (this->cuenta >= this->capacidad) this->agrandar();

cout << "Insertando un elemento..." << endl;

// Desplazar elementos a partir del indice a la derecha
for (int i= cuenta - 1; i >= indice; i--) {
cout <<"Desplazando elemento" << items[1] << "del indice"; 
cout << i << " al indice " << (i+1) <<endl; 
this->items[i+1] = this->items[i];
}

//Insertar nuevo Elemento
cout << "Insertando elemento " << item << "en el indice "<< indice << endl;
this->items [indice] = item;

// Incrementar la cuenta de elementos
cout << "Incrementando la cuenta de elementos" << endl;
this->cuenta++;
}

// Agregar un elemento al final
void ListaEnteros::adjuntar(int item) { 
this->insertar(this->cuenta, item);
}

// Valor del elemento en La posicion indice 
int ListaEnteros:: obtener(int indice) {
// Validar el indice
if (indice < 0 || indice >= this->cuenta) throw "Indice fuera de rango";
if (this->estaVacia()) throw "No se puede recuperar elementos de una lista vacia";

cout << "Recuperando elemento en el indice" << indice << endl;
return this->items [indice];
}

// Esta el item en La Lista?
bool ListaEnteros::contiene (int item) { 
for (int i = 0; i < this->cuenta; i++) {
cout << "Recorriendo elemento con indice " << i << endl;
if (this->items[i] == item)
return true;

}

return false;

}

// Remover elemento en el indice indice
int ListaEnteros::remover(int indice) {
	//validar el indice
if (this->estaVacia()) throw "No se puede renover elementos de una lista vacia"; 
if (indice < 0 || indice >= this->cuenta) throw "Indice fuera de rango";

cout << "Removiendo el elemento con indice " << indice << "..." << endl; 
// Lee el valor en el indice y desplaza elementos a la izquierda
int valor= this->items[indice];
for (int i = indice; i < cuenta - 1; i++) {
cout << "Desplazando elemento " << items[i] << " del indice";
cout << (i+1) << "al indice "<< i << endl;
this->items[i] = this->items [i+1];
}

// Reducir la cuenta de elementos 
cout << "Reduciendo la cuenta de elementos" << endl;
this->cuenta--;
return valor;
}

string ListaEnteros::comoCadena() { //Ejemplo de la listta es: {13, 75, 17, 25, 42}
ostringstream s;
s << "["; 
for (int i = 0; i < (this->cuenta); i++) { 
s << this->items[i];
if (i < this->cuenta-1)
s << ",	";
} 
s << "]";
return s.str();
}

#endif



