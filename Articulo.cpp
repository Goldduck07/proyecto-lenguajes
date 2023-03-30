#include <iostream>
#include "Articulo.h"

Articulo::Articulo(std::string _nombre, int _id, float _precio,std::string _tipo,int _cantidad,float _impuesto){
    nombre = _nombre;
    id = _id;
    precio = _precio;
    tipo = _tipo;
    cantidad = _cantidad;
    impuesto = _impuesto;
}

void Articulo::Mostrar_Articulo(){
    std::cout<<"\n"<<"Nombre: "<<nombre<<"\nID: "<<id<<"\nPrecio: "<<precio<<"\nTipo: "<<tipo<<"\nCantidad: "<<cantidad<<"\n";
}


Articulo_deportivo::Articulo_deportivo(std::string _nombre, int _id, float _precio, std::string _tipo, int _cantidad,float _impuesto): Articulo( _nombre, _id, _precio,_tipo, _cantidad,_impuesto){
    _tipo = "DEPORTIVO";
}

void Articulo_deportivo::Mostrar_Articulo(){
    Articulo::Mostrar_Articulo();
}


Articulo_tecnologico::Articulo_tecnologico(std::string _nombre, int _id, float _precio, std::string _tipo, int _cantidad,float _impuesto): Articulo(_nombre, _id, _precio, _tipo, _cantidad,_impuesto){
    _tipo = "TECNOLOGICO";
}

void Articulo_tecnologico::Mostrar_Articulo(){
    Articulo::Mostrar_Articulo();
    
}

Articulo_extranjero::Articulo_extranjero(std::string _nombre, int _id, float _precio, std::string _tipo, int _cantidad,float _impuesto): Articulo(_nombre, _id, _precio, _tipo, _cantidad,_impuesto){
    _tipo = "EXTRANJERO";
    _impuesto = _precio*0.10;
}

void Articulo_extranjero::Mostrar_Articulo(){
    Articulo::Mostrar_Articulo();
    std::cout<<"\nImpuesto: "<<impuesto<<std::endl;
}