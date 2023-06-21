#ifndef pila_hpp
#define pila_hpp

typedef struct empleado {
    char nombre[30];
    int edad;
    float sueldo;
}Empleado;

typedef struct nodo {
    Empleado emp;
    nodo* siguiente;
}Nodo;

void agregarPila(Nodo*&, Empleado);
void desapilar(Nodo*&, Empleado&);
void mostrar(Nodo*);

#endif