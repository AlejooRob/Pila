/*
 * Pila
 */
#include <iostream>
#include "pila.hpp"
using namespace std;

int main() {
    int opcion;
    Nodo* pila = NULL;
    Empleado emp1;

    do{
        cout<<"\n\n****Pilas*****"<<endl;
        cout<<"1. Ingresar un empleado a la pila"<<endl;
        cout<<"2. Desapilar un elelmento"<<endl;
        cout<<"3. Mostrar pila"<<endl;
        cout<<"4. Salir del programa"<<endl;
        cout<<"Ingrese la opcion: ";
        cin>>opcion;

        switch (opcion) {
            case 1:
                getchar();
                cout<<"Ingrese el nombre del empleado: ";
                cin.getline(emp1.nombre,30,'\n');
                cout<<"Ingrese la edad del empleado: ";
                cin>>emp1.edad;
                cout<<"Ingrese el sueldo del empleado: ";
                cin>>emp1.sueldo;
                agregarPila(pila, emp1);
                break;
            case 2:
                desapilar(pila,emp1);
                if(pila !=NULL) {
                    cout<<"Empleado: "<<emp1.nombre<<" ha sido eliminado"<<endl;
                }
                break;
            case 3:
                mostrar(pila);
                break;
            case 4:
                cout<<"Saliendo del programa..."<<endl;
                break;
            default:
                cout<<"Opcion ingresada incorrecta por favor vuelva a intentar";
        }

    } while (opcion!=4);


    return 0;
}
