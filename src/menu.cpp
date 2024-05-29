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

menu::menu()
{
    //ctor
}

void menu::MenuGeneral()
{
    system("cls");
    int opc;
    Reportes reportes;
    Catalogos catalogos;
    Procesos procesos;
    do
    {
        cout << "+-----------------------------------------------+" << endl;
        cout << "|        Bienvenido al Sistema de clientes      |" << endl;
        cout << "|        Victor Josue Samayoa Ortiz             |" << endl;
        cout << "|        Carnet: 9959-24-3424                   |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "|            1. Catalogos                       |" << endl;
        cout << "|            2. Procesos                        |" << endl;
        cout << "|            3. Reportes                        |" << endl;
        cout << "|            4. Salir                           |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "|         Ingrese su opcion [1-4]               |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cin >> opc;

        switch(opc)
        {
        case 1:

            system("cls");
            catalogos.CatalogosM();
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            procesos.ProcesosM();
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            reportes.ReportesM();
            system("pause");
            system("cls");
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
    } while (opc!=4);
}
