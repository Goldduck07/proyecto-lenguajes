#pragma once
#include <iostream>
#ifndef NODO_H
#define NODO_H
#include "Nodo.h"
#endif

class Lista_enlazada{
    public: 
        int cont = 0;
        int cont_carrito = 0;
        Nodo* cabeza = NULL;
        Nodo_carrito* cabeza2 = NULL;
        Nodo* Ultimo = NULL;
        void Agregar(std::string _nombre, int _id, float _precio, std::string _tipo, int cantidad, float _impuesto);
        void Eliminar(int _id);
        void Modificar(int _id);
        void Mostrar();
        void Eliminar_todo(int _id);
        void Mostrar_tecnologico();
        void Mostrar_Deportivo();
        void Agregar_carrito();
        void Mostrar_carrito();
        void Vaciar_carrito();
        void Suma_articulos();
        void obtener_ultimo();
};
