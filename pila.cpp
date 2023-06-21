#include <iostream>
#include "pila.hpp"

using namespace std;

void agregarPila(Nodo*& pila, Empleado emp) {
    Nodo *nuevo = new Nodo();
    nuevo->emp = emp;
    nuevo->siguiente = pila;
    pila = nuevo;

    cout<<"Se agrego a la pila"<<endl;
}

void desapilar(Nodo*& pila, Empleado& emp) {
    Nodo* aux = pila;
    emp = aux->emp;
    pila = aux->siguiente;
    delete aux;
    cout<<"Se saco un empleado de la pila"<<endl;
}

void mostrar(Nodo* pila) {
   Nodo* actual = pila;
   while(actual) {
       cout<<"Empleado: "<<actual->emp.nombre<<" edad: "<<actual->emp.edad<<" sueldo: "<<actual->emp.sueldo<<endl;
       actual=actual->siguiente;
   }
   cout<<endl;
}