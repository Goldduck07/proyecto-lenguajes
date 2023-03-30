#pragma once
#include <iostream>

class Articulo{
    public:
        std::string nombre;
        int id;
        float precio;
        std::string tipo;
        int cantidad;
        float impuesto;
        Articulo(){};
        Articulo(std::string,int,float,std::string,int,float);
        void Mostrar_Articulo();
};

class Articulo_deportivo:public Articulo{
    public:
        Articulo_deportivo(std::string,int,float,std::string,int,float);
        void Mostrar_Articulo();
};

class Articulo_tecnologico:public Articulo{
    public:    
        Articulo_tecnologico(std::string,int,float,std::string,int,float);
        void Mostrar_Articulo();
};

class Articulo_extranjero:public Articulo{
    public:
        Articulo_extranjero(std::string,int,float,std::string,int,float);
        void Mostrar_Articulo();
};