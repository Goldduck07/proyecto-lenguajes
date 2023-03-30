#include <iostream>
#include "Nodo.h"

Nodo::Nodo(std::string _nombre, int _id, float _precio, std::string _tipo, int _cantidad, float _impuesto){
    this->articulo = Articulo(_nombre, _id, _precio, _tipo, _cantidad,_impuesto);
    this->articulo = Articulo_deportivo(_nombre, _id, _precio, _tipo, _cantidad,_impuesto);
    this->articulo = Articulo_tecnologico(_nombre, _id, _precio, _tipo, _cantidad,_impuesto);
}

Nodo_carrito::Nodo_carrito(std::string nombre,int id,float precio,std::string tipo, int cantidad,float impuesto){
    this->carrito = Carrito(nombre,id,precio,tipo ,cantidad,impuesto);
}