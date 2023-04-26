#include<iostream>
#include"estructura.h"
#include<string.h>

#define MAX 100
using namespace std;

categoria categorias[MAX];
int pos = 0;

// crudcito c++

void agregarCategoria(int id, char nombre[]);
void mostrarCategoria(int i);
void mostrarCategorias();
void eliminarCategoria(int id);
void editarCategoria(int id, char nombre[]);
bool existeCategoria(int id);
void reordenarCategoria(int i);


void agregarCategoria(int id, char nombre[]){
    categorias[pos].idCat = id;
    strcpy(categorias[pos].nombre, nombre);
    pos++;
}

void mostrarCategoria(int i){
    cout<<"ID: "<<categorias[i].idCat<<endl;
    cout<<"Nombre: "<<categorias[i].nombre<<endl;
}

void mostrarCategorias(){
    for (int i = 0; i < pos; i++)
    {
        cout<<"ID: "<<categorias[i].idCat<<endl;
        cout<<"Nombre: "<<categorias[i].nombre<<endl;
    }
}

bool existeCategoria(int id){
    bool existe = false;
    int i = 0;

    while(i < pos){
        if (categorias[i].idCat == id){
            existe = true;
            break;
        }
    } i++;
    return existe;
}

void eliminarCategoria(int id){
    if (existeCategoria(id))
    {
        del

    }else
    {
        cout<<"***ERROR: EL CÓDIGO INGRESADO NO EXISTE. ***";
    }  
}

void reordenarCategoria(int i){
     for (int i = 0; i < pos; i++)
     {
        /* code */
     }
     
}

    