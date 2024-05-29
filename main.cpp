#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include <unistd.h>
#include "menu.h"
#include "Login.h"

using namespace std;

//usuario de ingreso: admin
//contraseña: 1234

//usuario de ingreso: Estuardo
//contraseña: 5678

//usuario de ingreso: Victor
//contraseña: 3424

int main()
{

    Login login;

    if (login.validacion()) {
        menu general;
        general.MenuGeneral();
    } else
    {
    cout<<"       -> Intentelo Nuevamente...";
    }

    system("cls");

    return 0;
}
