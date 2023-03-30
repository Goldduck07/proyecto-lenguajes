#include <iostream>
#include "Sistema.h"
#include <stdlib.h>
extern Lista_enlazada a1;
void _Sistema::Menu_Coordinador(){
 //Lista_enlazada a1;
 do{
        std::cout<<"\t\t\t\t\t\t!BIENVENIDO AL MENU DE COORDINADOR!\n\n\n";

        std::cout<<"Estas son las opciones que tiene para seleccionar segun lo que quiera hacer\n";
        std::cout<<"1.Agregar articulo \n2.Modificar un articulo \n3.Eliminar un articulo \n4.Ver la lista de articulos que tiene hasta el momento\n5.Para salir del menu \n";
        std::cin>>opcion;
        switch(opcion){
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
                std::cout<<"Oprima 1 para deportivo, 2 para tecnologico o 3 para extranjero\n";
                std::cout<<"\nTipo: ";
                std::cin>>option_type;
                if(option_type == 1){
                    tipo = "DEPORTIVO";
                }
                else if(option_type == 2){
                    tipo = "TECNOLOGICO";
                }
                else
                {
                    tipo = "EXTRANJERO";
                }
                std::cout<<"\nCantidad: ";
                std::cin>>cantidad;
                a1.Agregar(nombre,id,precio,tipo,cantidad,impuesto);
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
    while(opcion != 5);
}

void _Sistema::Menu_Cliente(){
    do
    {
        std::cout<<"\t\t\t\t\t\t!BIENVENIDO AL MENU DE CLIENTE!\n\n\n";
        std::cout<<"Estas son las opciones que tiene para seleccionar segun lo que quiera hacer\n";
        std::cout<<"1.Ver articulos deportivos \n2.Ver articulos tecnologicos \n3.Agregar al carrito \n4.Ver lo que lleva en el carrito \n5.Pagar o cancelar la compra \n6.Salir del menu\n";
        std::cin>>opcion;
        switch(opcion){
            case 1:
            {
                std::cout<<"Ingreso que quiere ver la lista de articulos deportivos\n";
                a1.Mostrar_Deportivo();
                break;
            }
            case 2:
            {
                std::cout<<"Ingreso que quiere ver la lista de articulos tecnologicos\n";
                a1.Mostrar_tecnologico();
                break;
            }
            case 3:
            {
                std::cout<<"Ingreso que quiere agregar al carrito algun articulo del sistema\n";
                std::cout<<"Para agregar al carrito ingrese el nombre del articulo que desee agregar\n";
                a1.Agregar_carrito();
                break;
            }
            case 4:
            {
                std::cout<<"Ingreso que quiere ver los articulos que lleva agregados en su carrito de compras\n";
                a1.Mostrar_carrito();
                break;
            }
            case 5:
            {
                std::cout<<"Ingreso que quiere pagar o cancelar los articulos que tiene en su carrito\n";
                std::cout<<"1. Para pagar\n2. Para cancelar\n";
                std::cout<<"Este es el total a pagar\n";
                a1.Suma_articulos();
                std::cin>>opcion;
                if(opcion == 1){
                    std::cout<<"Se han pagado todos los articulos del carrito, gracias por su compra :)\n";
                    a1.Vaciar_carrito();
                }
                else{
                    std::cout<<"Su compra fue cancelada con exito se han vaciado los articulos del carrito\n";
                    a1.Vaciar_carrito();
                }
                break;
            }
        }
        system("pause");
    }
    while(opcion != 6);
}


void _Sistema::Menu_Sistema(){
    //Menu_Coordinador a1;
    //Menu_Cliente _a1;
    do{
        std::cout<<"\t\t\t\t\t\t!BIENVENIDO AL SISTEMA EAFIZON!\n\n\n";
        std::cout<<"En el sistema te damos a elegir dos opciones de ingresar como Coordinador o como Cliente\n";
        std::cout<<"Para ser Coordinador oprime 1\n";
        std::cout<<"Para ser Cliente oprime 2\n";
        std::cout<<"Para salir del sistema oprime 3\n";
        std::cin>>opcion;
        switch(opcion){
            case 1:
            {
                Menu_Coordinador();
                break;
            }
            case 2:
            {
                Menu_Cliente();
                break;
            }
        }
    }
    while(opcion != 3);
}