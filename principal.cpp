#include<iostream>
#include"estructura.h"

using namespace std;

int main(void){

    int cant;
    int cant1;

    cout<<"Dime cuantas categorias desea agregar: ";
    cin>>cant;

    for (int i = 0; i < cant; i++)
    {
        cout<<"Ingrese el ID: ";
        cin>>categorias[i].idCat;

        cout<<"Ingrese el nombre: ";
        cin>>categorias[i].nombre;
    }
    
    cout<<"MOSTRAR CATEGORIAS\n";
    cout<<"******************\n";
    for (int i = 0; i < cant; i++)
    {
        cout<<"ID: "<<categorias[i].idCat<<endl;
        cout<<"Nombre: "<<categorias[i].nombre<<endl;
        cout<<"*******************************\n";
    }

    cout<<"Dime cuantos productos desea anadir: ";
    cin>>cant1;

    for (int i = 0; i < cant1; i++)
    {
        cout<<"Ingrese el ID: ";
        cin>>productos[i].id;

        cout<<"Ingrese el nombre: ";
        cin>>productos[i].nombre;

        cout<<"Ingrese la descripcion del producto: ";
        cin>>productos[i].desc;
        
        cout<<"Ingrese el precio del producto: ";
        cin>>productos[i].precio;
    }

    cout<<"MOSTRAR PRODUCTOS\n";
    cout<<"*******************\n";

    for (int i = 0; i < cant1; i++)
    {   

        cout<<"ID: "<<productos[i].id<<endl;
        cout<<"Nombre: "<<productos[i].nombre<<endl;
        cout<<"Descripcion: "<<productos[i].desc<<endl;
        cout<<"Precio: "<<productos[i].nombre<<endl;
    }
    
    return 0;
}