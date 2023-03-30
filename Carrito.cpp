#include <iostream>
#include "Carrito.h"

Carrito::Carrito(std::string _nombre,int _id,float _precio,std::string _tipo, int _cantidad,float _impuesto):Articulo(_nombre,_id,_precio,_tipo,_cantidad,_impuesto){

}

void Carrito::Mostrar_Articulo(){
    Articulo::Mostrar_Articulo();
    //std::cout<<"\n"<<"Nombre: "<<nombre<<"\nPrecio: "<<precio<<"\nCantidad: "<<cantidad<<"\n"<<std::endl;
}