// queue::push/pop
#include "Mascota.h"
#include "Evaluador.h"
#include <iostream>
#include <list>
#include <fstream>
using namespace std;

int tamano_registro=24;

//Escribe los datos del objeto mascota dado en un archivo binario con el nombre dado en la posicion dada
//Nota: Se deben poder agregar varias mascotas en un solo archivo
void escribir(string nombre_archivo, Mascota*mascota, int posicion)
{
    ofstream out(nombre_archivo.c_str(),ios::in);
    if(!out.is_open())
    {
        out.open(nombre_archivo.c_str());
    }
    out.seekp(posicion*tamano_registro);
    out.write((char*)&mascota->edad,4);
    out.write(mascota->nombre.c_str(),20);
    out.close();
}

//Devuelve una mascota previamente escrita (con la funcion escribir()) en un archivo binario con nombre dado en la posicion dada
//Nota: Se deben poder leer varias mascotas de un solo archivo
Mascota* leer(string nombre_archivo, int posicion)
{
    ifstream in(nombre_archivo.c_str());

    int edad;
    char nombre[20];

    in.seekg(posicion*tamano_registro);

    in.read((char*)&edad,4);
    in.read(nombre,20);

    in.close();

    Mascota *m = new Mascota(edad,nombre);
    return m;
}

//Devuelve un vector que contenga todas las mascotas previamente escritas (con la funcion escribir()) en un archivo binario con nombre dado
//Nota: El vector debe contener las mascotas ordenadas de acuerdo a la posicion en la que se escribieron
vector<Mascota*> leerTodos(string nombre_archivo)
{
    vector<Mascota*>respuesta;
    return respuesta;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
