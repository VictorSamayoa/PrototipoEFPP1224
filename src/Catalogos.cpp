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
        cout << "|            1. Entrenador                      |" << endl;
        cout << "|            2. Equipo                          |" << endl;
        cout << "|            3. Pais                            |" << endl;
        cout << "|            4. Puesto                          |" << endl;
        cout << "|            5. Jugador                         |" << endl;
        cout << "|            6. Usuarios                        |" << endl;
        cout << "|            7. Regresar al Menu                |" << endl;
        cout << "|            8. Salir                           |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "|         Ingrese su opcion [1-8]               |" << endl;
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

        }
            break;
        case 4:
         {

        }
            break;
        case 5:
        {

        }
            break;
        case 6  :
        {
           usuarios usu;
           usu.menu();
        }
            break;
        case 7:{
            menu menu;
            menu.MenuGeneral();
            }
            break;
        case 8:
            exit(0);
            break;
        default:
            cout << "\n\t Opcion invalida...Por favor prueba otra vez..";
            cin.ignore();
            cin.get();
            system("cls");
        }
    } while (opc!=8);
}
