#include <iostream>
#include "Inventario.h"

void Lista_enlazada::Agregar(std::string _nombre, int _id, float _precio, std::string _tipo, int _cantidad,float _impuesto){
    Nodo *nuevo = new Nodo(_nombre, _id, _precio, _tipo, _cantidad,_impuesto);
    if(cabeza == NULL){
        nuevo->Siguiente = NULL;
        cabeza = nuevo;
        cont++;
    }
    else{
        Nodo *temp = cabeza;
        while(temp->Siguiente != NULL){
            temp= temp->Siguiente;
        }
        temp->Siguiente = nuevo;
        cont++;
    }
}

void Lista_enlazada::Mostrar(){
    Nodo *temp = cabeza;
    if(cabeza != NULL){
        while(temp != NULL){
            temp->articulo.Mostrar_Articulo();
            temp = temp->Siguiente;
    }
    }
    else{
        std::cout<<"La lista esta vacia\n";
    }
}

void Lista_enlazada::Modificar(int _id){
    if(cabeza != NULL){
    Nodo *temp = cabeza;
    while (temp->articulo.id != _id)
    {
        temp = temp->Siguiente;
    }
    int choice;
    std::cout<<"Que atributo quiere cambiar del articulo?\n1.Nombre \n2.Precio \n3.Cantidad. "<<std::endl;
    std::cin>>choice;
    switch(choice){
        case 1:
        {
            std::string nuevo_nombre;
            std::cout<<"Ingrese el nuevo nombre del articulo: "; std::cin>>nuevo_nombre; 
            temp->articulo.nombre = nuevo_nombre;
        break;
        }
        case 2:
        {
            int nuevo_precio;
            std::cout<<"Ingrese el nuevo precio del articulo: "; std::cin>>nuevo_precio;
            temp->articulo.precio = nuevo_precio;
        break;
        }
        case 3:
        {
            int nueva_cantidad;
            std::cout<<"Ingrese la nueva cantidad del articulo: "; std::cin>>nueva_cantidad;
            temp->articulo.cantidad = nueva_cantidad;
        break;
        }
    }
    }
    else
    {
        std::cout<<"El articulo no ha sido encontrado\n";
    }
}

void Lista_enlazada::Eliminar(int _id){
    if(cabeza != NULL){
    Nodo *aux = cabeza;
    Nodo *anterior = NULL;
    while(aux->articulo.id != _id){
        anterior = aux;
        aux= aux->Siguiente;
    }
    if(anterior == NULL )
    {
        cabeza = cabeza->Siguiente;
        delete aux;
    }
    else
    {
        anterior->Siguiente = aux->Siguiente;
        delete aux;
    }
    cont--;
    }
    else
    {
        std::cout<<"La lista esta vacia por lo tanto no se puede eliminar nada \n";
    }
}

void Lista_enlazada::Eliminar_todo(int _id){
    if(cabeza != NULL)
    {
    while(cont != 0){
        Eliminar(_id);
    }
    }
    else
    {
        std::cout<<"La lista esta vacia no se puede eliminar nada\n";
    }
}

void Lista_enlazada::Mostrar_Deportivo(){
    if(cabeza != NULL){
        Nodo *aux = cabeza;
        while(aux != NULL){
            if(aux->articulo.tipo == "DEPORTIVO"){
                aux->articulo.Mostrar_Articulo();
            }
            aux = aux->Siguiente;
        }
    }
    else
    {
        std::cout<<"No hay articulos deportivos\n";
    }
}

void Lista_enlazada::Mostrar_tecnologico(){
    if(cabeza != NULL){
        Nodo *aux = cabeza;
        while(aux != NULL){
            if(aux->articulo.tipo == "TECNOLOGICO"){
                aux->articulo.Mostrar_Articulo();
            }
            aux = aux->Siguiente;
        }
    }
    else
    {
        std::cout<<"No hay articulos tecnologicos\n";
    }
}

//Nodo_carrito* cabeza2 = NULL;
void Lista_enlazada::Agregar_carrito(){
    Nodo* temp = cabeza;
    //Nodo_carrito* car = new Nodo_carrito(temp->articulo.nombre,temp->articulo.id, temp->articulo.precio,temp->articulo.tipo, 1);
    //Nodo_carrito* car = new Nodo_carrito(temp->articulo.nombre,temp->articulo.id, temp->articulo.precio,temp->articulo.tipo, 1);
    Nodo_carrito *aux;
    int id;
        std::cout<<"Ingrese el ID del producto\n";
        std::cin>>id;
    if(cabeza == NULL){
        std::cout<<"El inventario esta vacio\n";
    }
    bool flag = false;
    while(temp != NULL){
        if(temp->articulo.id == id){
            flag =true;
            break;
        }
        temp = temp->Siguiente;
    }
    if(flag == false){
        std::cout<<"El articulo no existe en el inventario\n";
    }
    //temp = cabeza;
    while(temp != NULL){
        if(flag == true){
            if(temp->articulo.id == id){
                std::cout<<"prueba";
                
                if(cabeza2 == NULL){
                    Nodo_carrito* car = new Nodo_carrito(temp->articulo.nombre,temp->articulo.id, temp->articulo.precio,temp->articulo.tipo, 1,temp->articulo.impuesto);
                    car->Siguiente= NULL;
                    cabeza2 = car;
                    temp->articulo.cantidad-= 1;
                    cont_carrito++;
                    
                }
                else{
                    aux = cabeza2;
                    while(aux->Siguiente != NULL){
                        std::cout<<"prueba";
                        aux = aux->Siguiente;
                    }
                    Nodo_carrito* car = new Nodo_carrito(temp->articulo.nombre,temp->articulo.id, temp->articulo.precio,temp->articulo.tipo, 1,temp->articulo.impuesto);
                    aux->Siguiente = car;
                    temp->articulo.cantidad -= 1;
                    cont_carrito++;
                    break;
                }
            }
            
        }
        break;
    }
    
    }

    void Lista_enlazada::Mostrar_carrito(){
        Nodo_carrito *aux = cabeza2;
        Nodo* temp = cabeza;
    if(cabeza != NULL){
        while(aux != NULL){
            aux->carrito.Mostrar_Articulo();
            aux = aux->Siguiente;
    }
    }
    else{
        std::cout<<"La lista esta vacia\n";
    }
    }
    void Lista_enlazada::Vaciar_carrito(){
        Nodo_carrito* aux = cabeza2;
        if(cabeza != NULL)
        {
            while(cont_carrito != 0){
                aux = aux->Siguiente;
        }
        aux = NULL;
        
        }
        else
        {
            std::cout<<"La lista esta vacia no se puede eliminar nada\n";
        }

        /*
        if(cabeza != NULL){
    Nodo *aux = cabeza;
    Nodo *anterior = NULL;
    while(aux->articulo.id != _id){
        anterior = aux;
        aux= aux->Siguiente;
    }
    if(anterior == NULL )
    {
        cabeza = cabeza->Siguiente;
        delete aux;
    }
    else
    {
        anterior->Siguiente = aux->Siguiente;
        delete aux;
    }
    cont--;
    }
    else
    {
        std::cout<<"La lista esta vacia por lo tanto no se puede eliminar nada \n";
    }
        */
}

    void Lista_enlazada::Suma_articulos(){

        if (cabeza2 == NULL) {
            std::cout<<"No hay articulos para sumar";
            return;
        }


        Nodo_carrito* aux = cabeza2;
        int s = 0;
        std::cout<<cabeza->articulo.precio<<std::endl;
        while(aux != NULL) {
            std::cout << aux->carrito.precio << std::endl; 
            s += aux->carrito.precio;
            aux = aux->Siguiente;
        }

        std::cout<<s<<std::endl;
    }

    void Lista_enlazada::obtener_ultimo(){
        Nodo* temp = cabeza;
        while(temp != NULL){
            temp = temp->Siguiente;
        }
        temp = Ultimo;
    }

