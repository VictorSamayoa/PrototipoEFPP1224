#include "menu.h"
#include "usuarios.h"
#include "Bitacora.h"
#include "Login.h"
#include "Reportes.h"
#include "Catalogos.h"
#include "procesos.h"
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

        }
            break;
        case 2:
        {

        }
            break;
        case 3:
        {
           usuarios usu;
           usu.menu();
        }
            break;
        case 4:
         {
            menu menu;
            menu.MenuGeneral();
        }
            break;
        default:
            cout << "\n\t Opcion invalida...Por favor prueba otra vez..";
            cin.ignore();
            cin.get();
            system("cls");
        }
    } while (opc!=4);
}
