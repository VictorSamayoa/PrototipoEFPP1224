#include "Login.h"
#include "Bitacora.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string Login::usuarioActual = "";

Login::Login(string nombre, string contra, int maxintentos) : nombre(nombre), contra(contra), maxintentos(maxintentos), contintentos(0) {}

void Login::setnombre(string nombre) {
    this->nombre = nombre;
}

string Login::getnombre() const {
    return nombre;
}

void Login::setcontra(string contra) {
    this->contra = contra;
}

string Login::getcontra() const {
    return contra;
}

void Login::resetintentos() {
    contintentos = 0;
}

bool Login::validacion() {
    system("cls");

    fstream archivo;
    string nom;
    string pass;
    bool encontrado = false;

    archivo.open("Usuario.dat", ios::binary | ios::in);

    if (!archivo) {
        cout << "Error, no se encuentra informacion..." << endl;
        return false;
    }

    while (contintentos < maxintentos) {
        system("cls");
        cout << "+---------------------------------------------+" << endl;
        cout << "|       Bienvenido al Sistema                 |" << endl;
        cout << "+---------------------------------------------+" << endl;
        cout << "|                                             |" << endl;
        cout << "|            Ingrese sus Credenciales         |" << endl;
        cout << "|                                             |" << endl;
        cout << "+---------------------------------------------+" << endl;
        cout << "|                                             |" << endl;
        cout << "|          Usuario: ";
        cin >> nom;
        cout << "|                                             |" << endl;
        cout << "|          Contraseña: ";
        pass = "";
        char ch;
        while ((ch = getch()) != '\r') {
            if (ch == '\b') {
                if (!pass.empty()) {
                    cout << "\b \b";
                    pass.pop_back();
                }
            } else {
                cout << '*';
                pass += ch;
            }
        }
        cout << endl;
        cout << "|                                             |" << endl;
        cout << "+---------------------------------------------+" << endl;
        cout << "|                                             |" << endl;
        cout << "|         [Presione Enter para Iniciar]       |" << endl;
        cout << "|                                             |" << endl;
        cout << "+---------------------------------------------+" << endl;
        cout << "\n\n\n";

        // Mostrar los intentos restantes
        cout << "Intentos restantes: " << (maxintentos - contintentos) << endl;

        cout << "Presione Enter para continuar...";
        cin.ignore();
        while (cin.get() != '\n') {}

        Usuarios usuario;
        system("cls");
        while (archivo.read(reinterpret_cast<char*>(&usuario), sizeof(Usuarios))) {
            if (nom == usuario.nombre && pass == usuario.contra) {
                usuarioActual = nom;
                string codigoPrograma = "2350";
                Bitacora bitacora;
                bitacora.ingresoBitacora(nom, codigoPrograma, "LOG");
                encontrado = true;
                break;
            }
        }

        if (encontrado) {
            cout << "Login exitoso!" << endl;
            archivo.close();
            resetintentos();
            return true;
        } else {
            cout << "Nombre o contraseña incorrectos" << endl;
            contintentos++;
            archivo.clear();
            archivo.seekg(0, ios::beg);
        }

        if (contintentos >= maxintentos) {
            cout << "Se ha alcanzado el numero maximo de intentos. Acceso denegado." << endl;
            archivo.close();
            return false;
        }
    }

    archivo.close();
    return false;
}
