#pragma once
#include <iostream>
#include "Usuario.h"
//#include "Cliente.h"
//#include "Coordinador.h"

class _Sistema:public _Usuario{
    public:
    //static Lista_enlazada a;
    std::string nombre;
    int id;
    float precio;
    char tipo [20];
    int cantidad; 
    float impuesto;
    int opcion;
    void Menu_Sistema();
    void Menu_Coordinador();
    void Menu_Cliente();
};