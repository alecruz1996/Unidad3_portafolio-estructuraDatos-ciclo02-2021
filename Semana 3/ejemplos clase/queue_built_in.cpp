#include <iostream> 
#include <queue>
using namespace std;

int main () {

// Haciendo uso de la estructura queue == cola 
// First In First Out FIFO
// Primero en Entrar Primero en Salir
queue <int> q;
q.push(10); 
q.push(11);
q.push(12);
q.push(13);
q.push(14);
q.push(15);
q.push(16);
q.push(17);
q.push(18);
q.push(19);
q.push(20);
cout<<"Tamanio de la cola: "<<q.size()<<endl;
cout<<"Frente de la cola: "<<q.front()<<endl; 
cout<<"Final de la cola: "<<q.back() <<endl;
queue <int> q1;
q1 = q;

while(!q1.empty()){
cout<<"Dequeue: "<< q1.front ()<<endl;
q1.pop();



} return 0;
}
