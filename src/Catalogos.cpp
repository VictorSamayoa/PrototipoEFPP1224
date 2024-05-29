#include "menu.h"
#include "usuarios.h"
#include "Bitacora.h"
#include "Login.h"
#include "Reportes.h"
#include "Catalogos.h"
#include "procesos.h"
#include "Cliente.h"
#include <iostream>
#include <windows.h>
Catalogos::Catalogos()
{
    //ctor
}

void Catalogos::CatalogosM()
{
    system("cls");
    int opc;

    do
    {
        cout << "+-----------------------------------------------+" << endl;
        cout << "|               Menu de CATALOGOS               |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "|            1. Cliente                         |" << endl;
        cout << "|            2. Usuarios                        |" << endl;
        cout << "|            3. Regresar al Menu                |" << endl;
        cout << "|            4. Salir                           |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "|         Ingrese su opcion [1-4]               |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "\t\t\tIngresa tu Opcion: ";
        cin >> opc;

        switch(opc)
        {
        case 1:
        {
            Cliente Clie;
            Clie.menu();

        }
            break;
        case 2:
        {
           usuarios usu;
           usu.menu();

        }
            break;
        case 3:
        {
            menu menu;
            menu.MenuGeneral();
        }
            break;
        case 4:
            exit(0);
            break;

        default:
            cout << "\n\t Opcion invalida...Por favor prueba otra vez..";
            cin.ignore();
            cin.get();
            system("cls");
        }
    } while (opc!=5);
}
