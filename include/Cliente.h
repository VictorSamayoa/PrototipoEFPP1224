#ifndef CLIENTE_H
#define CLIENTE_H

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>

using namespace std;
 struct Clientec {

    char id[20];          // Almacena la id de los alumnos ingresados
    char nombre[50];      // Almacena el nombre  del alumno ingresado
    char nombre2[50];      // Almacena el género del alumno ingresado
    char Apellido[50];         // Almacena el DPI del alumno ingresado
    char Apellido2[50];  // Almacena la dirección del alumno ingresado
    char fechadenacimiento[50];
    char correo[50];// Almacena la nacionalidad del alumno ingresado

};
class Cliente{
    private:
    string id, nombre, nombre2, DPI, Apellido, Apellido2, fechadenacimiento,correo;


    //Atributos publicos de la clase alumnos
    public:
        //Creando los contructores

        Cliente() {}
        Cliente(string id,string nombre,string nombre2, string Apellido,string Apellido2,string fechadenacimiento, string correo);

        //Estableciendo la id
        string setid(string id);
        //obteniendo la id
        string getid();


        //Estableciendo el nombre
        string setnombre(string nombre);
        //obteniendo el nombre
        string getnombre();


         //Estableciendo el nombre
        string setnombre2(string nombre2);
        //obteniendo el nombre
        string getnombre2();


        //Estableciendo el apellido
        string setApellido(string Apellido);
        //Obteniendo el DPI
        string getApellido();


        //Estableciendo el apellido
        string setApellido2(string Apellido2);
        //Obteniendo el DPI
        string getApellido2();



        //Estableciendo el nacimiento
        string setFechanaci(string fechadenacimiento);
        //Obteniendo el genero
        string getFechanaci();

        string setcorreo(string correo);
        //obteniendo el nombre
        string getcorreo();



    //Funciones
    void menu(); //Funcion menu para poder mostar el menu de alumnos
    void insertar(); //Funcion para insertar un nuevo alumno
    void desplegar(); //Funcion para poder desplegar los alumnos registrados
    void modificar(); //Funcion para modificar un alumno registrado
    void buscar(); //Funcion para poder buscar un alumno por medio de la id
    void borrar(); //Funcion para poder borrar algun alumno registrado




};


#endif
