/*
#include <iostream>
#include "Coordinador.h"
#include <string.h>
#include <stdlib.h>
void Menu_Coordinador::_Menu_Coordinador(){
 //Lista_enlazada a1;
 do{
        std::cout<<"\t\t\t\t\t\t!BIENVENIDO AL MENU DE COORDINADOR!\n\n\n";

        std::cout<<"Estas son las opciones que tiene para seleccionar segun lo que quiera hacer\n";
        std::cout<<"1.Agregar articulo \n2.Modificar un articulo \n3.Eliminar un articulo \n4.Ver la lista de articulos que tiene hasta el momento\n5.Para salir del menu \n";
        std::cin>>option;
        switch(option){
            case 1:
            {
                int option_type;
                std::string tipo;
                std::cout<<"Selecciono que quiere agregar un articulo al inventario\n";
                std::cout<<"Para agregar un articulo debera ingresar un nombre,ID,precio,tipo deportivo o tecnologico y cantidad en ese orden y tipo de articulos especifico\n";
                std::cout<<"\nNombre: "; 
                std::cin>>nombre;
                std::cout<<"\nID: ";
                std::cin>>id;
                std::cout<<"\nPrecio: ";
                std::cin>>precio;
                std::cout<<"Oprima 1 para deportivo o 2 para tecnologico\n";
                std::cout<<"\nTipo: ";
                std::cin>>option_type;
                if(option_type == 1){
                    tipo = "DEPORTIVO";
                }
                else{
                    tipo = "TECNOLOGICO";
                }
                std::cout<<"\nCantidad: ";
                std::cin>>cantidad;
                a1.Agregar(nombre,id,precio,tipo,cantidad);
                break;
            }
            case 2:
            {
                std::cout<<"Selecciono que quiere mofidicar un articulo del inventario\n";
                std::cout<<"Para modificar un articulo debe ingresar el ID del articulo y se le dara la opcion de solo modificar una cosa a la vez\nLo unico que puede modificar es el nombre,precio y cantidad\n";
                a1.Mostrar();
                std::cout<<"Ingrese el ID del articulo a modificar: ";
                std::cin>>id;
                a1.Modificar(id);
                break;
            }
            case 3:
            {
                std::cout<<"Selecciono que quiere eliminar un articulo del inventario\n";
                std::cout<<"Para eliminar un articulo debe ingresar el ID del articulo a eliminar\n";
                a1.Mostrar();
                std::cout<<"Ingrese el ID del articulo a eliminar: ";
                std::cin>>id;
                a1.Eliminar(id);
                break;
            }
            case 4:
            {
                std::cout<<"Selecciono que quiere ver los articulos ingresados en el invetario\nEstos son los articulos ingresados hasta el momento: \n";
                a1.Mostrar();
                break;
            }
        } 
        system("pause");
    }
    while(option != 5);
}
*/