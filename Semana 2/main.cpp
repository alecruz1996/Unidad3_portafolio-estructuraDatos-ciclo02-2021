#include <iostream>
#include "lista_enteros_array.h"

using std::cin;
using std::cout;
using std::endl;

int main(){
	ListaEnteros miLista;
cout << "La lista es:" << miLista.comoCadena() << endl << endl; 
ListaEnteros miLista2 = miLista;
cout << endl;
cout << (miLista.estaVacia () ? "true": "false") << endl << endl;
miLista.adjuntar (12);
cout << "La lista es: " << miLista.comoCadena() << endl << endl;
miLista.adjuntar (17);
cout << "La lista es: " << miLista.comoCadena() << endl << endl;
miLista.adjuntar (25);
cout << "La lista es: " << miLista.comoCadena() << endl << endl;
miLista.insertar (1, 75);
cout << "La lista es: " <<miLista.comoCadena() << endl << endl;
miLista.insertar (0, 13);
cout << "La lista es: " <<miLista.comoCadena() << endl << endl;
cout << "Tamano de la lista: " << miLista.tamano() << endl << endl;
cout << miLista.obtener(3) << endl << endl;
cout << miLista.remover(1) << endl << endl;
cout << "La lista es: " <<miLista.comoCadena() << endl << endl;
miLista.adjuntar(42);
cout << "La lista es: " <<miLista.comoCadena() << endl << endl;
return 0;
}
