#pragma once
#include <iostream>
#ifndef ARTICULO_H
#define ARTICULO_H
#include "Articulo.h"
#endif
#include "Carrito.h"
class Nodo{
    public:
        Articulo articulo;
        Nodo *Siguiente;
        Nodo(){};
        Nodo(std::string _nombre,int _id,float _precio,std::string _tipo,int _cantidad,float _impuesto);
};

class Nodo_carrito{
    public:
        Carrito carrito;
        Nodo_carrito *Siguiente = NULL;
        Nodo_carrito(){};
        Nodo_carrito(std::string nombre,int id,float precio,std::string tipo, int cantidad, float impuesto);
};

