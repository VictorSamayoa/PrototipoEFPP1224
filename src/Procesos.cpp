#include "menu.h"
#include "usuarios.h"
#include "Bitacora.h"
#include "Login.h"
#include "Reportes.h"
#include "Catalogos.h"
#include "procesos.h"
#include <iostream>
#include <windows.h>

using namespace std;

Procesos::Procesos()
{
    //ctor
}
void Procesos::ProcesosM()
{
     system("cls");
    int opc;

    do
    {
        system("cls");
        cout << "+-----------------------------------------------+" << endl;
        cout << "|               Menu de PROCESOS                |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "|            1. Resultados                      |" << endl;
        cout << "|            2. Bitacora                        |" << endl;
        cout << "|            3. Salir                           |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "|         Ingrese su opcion [1-3]               |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "\t\t\tIngresa tu Opcion: ";
        cin >> opc;

        switch(opc)
        {
        case 1:
             {
                break;
            }
        case 2:
            {
                Bitacora bitacora;
                bitacora.mostrarBitacora();
                break;
            }
        case 3:
             {
                menu menu;
                menu.MenuGeneral();
            }
        default:
            cout << "\n\t Opcion invalida...Por favor prueba otra vez..";
            cin.ignore();
            cin.get();
            system("cls");
        }
    } while (opc!=3);
}


