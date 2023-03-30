
#pragma once
#include <iostream>
#include "Articulo.h"
//#include "Lista_enlazada.h"

class Carrito: public Articulo{
    public:
    std::string nombre;
    int id;
    int precio;
    std::string tipo;
    int cantidad;
    Carrito(){};
    Carrito(std::string, int,float,std::string, int,float);
    void Mostrar_Articulo();
    
};