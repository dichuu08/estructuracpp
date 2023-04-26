#define MAX 100

//Categoría
typedef struct 
{
    int idCat;
    char nombre[30];

}categoria;

categoria categorias[MAX];

//Registro de productos
typedef struct 
{
    int id;
    char nombre[30];
    char desc[200];
    float precio;
    categoria categoria;

}producto;

producto productos[MAX];
