/*
#include <iostream>
#include "Cliente.h"
#include <string.h>
#include <stdlib.h>

void Menu_Cliente::_Menu_Cliente(){
    do
    {
        std::cout<<"\t\t\t\t\t\t!BIENVENIDO AL MENU DE CLIENTE!\n\n\n";
        std::cout<<"Estas son las opciones que tiene para seleccionar segun lo que quiera hacer\n";
        std::cout<<"1.Ver articulos deportivos \n2.Ver articulos tecnologicos \n3.Agregar al carrito \n4.Ver lo que lleva en el carrito \n5.Pagar o cancelar la compra \n6.Salir del menu\n";
        std::cin>>_option;
        switch(_option){
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
                std::cout<<"1. Para pagar\n2. Para cancelar";
                std::cout<<"Este es el total a pagar\n";
                //a1.Suma_articulos(precio);
                std::cin>>_option;
                if(_option == 1){
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
    while(_option != 6);
}
*/