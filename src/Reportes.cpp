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

Reportes::Reportes()
{
    //ctor
}

void Reportes::ReportesM()
{
     system("cls");
    Bitacora bitacora;

    int opcion;
    string usuario;



    do {
    cout << "+------------------------------------------+" << endl;
    cout << "|  Subsitena de Reportes                   |" << endl;
    cout << "+------------------------------------------+" << endl;
    cout << "|      1) Generar reporte completo         |" << endl;
    cout << "|      2) Generar reporte por usuario      |" << endl;
    cout << "|      3) Regresar al menu                 |" << endl;
    cout << "|      4) Salir del programa               |" << endl;
    cout << "+------------------------------------------+" << endl;
    cout << "Ingrese el numero de opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                 system("cls");
                bitacora.generarReporteCompleto();
                 cout << "Se Genero el Reporte Completo De la Bitacora" << endl;
                break;
            case 2:
                 system("cls");
                cout << "Ingrese el nombre de usuario para generar el reporte: ";
                cin >> usuario;
                bitacora.generarReportePorUsuario(usuario);
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
                cout << "Opción no válida. Por favor, seleccione una opción válida." << endl;
                break;
        }
    } while (opcion != 4);
}
