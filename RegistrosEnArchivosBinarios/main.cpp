#include <iostream>
#include <fstream>

using namespace std;

int tamano_registro=28;

class Clase
{
public:
    string nombre;//20
    int aula;//4
    int alumnos;//4

    Clase(string nombre, int aula, int alumnos)
    {
        this->nombre=nombre;
        this->aula=aula;
        this->alumnos=alumnos;
    }
};

void escribirClase(string nombre_archivo,Clase clase,int pos)
{
    ofstream out(nombre_archivo.c_str(),ios::in);
    if(!out.is_open())
    {
        out.open(nombre_archivo.c_str());
    }
    out.seekp(pos*tamano_registro);
    out.write(clase.nombre.c_str(),20);
    out.write((char*)&clase.aula,4);
    out.write((char*)&clase.alumnos,4);

    out.close();
}

Clase leerClase(string nombre_archivo, int pos)
{
    ifstream in(nombre_archivo.c_str());
    in.seekg(pos*tamano_registro);

    char nombre[20];
    int aula;
    int alumnos;

    in.read(nombre,20);
    in.read((char*)&aula,4);
    in.read((char*)&alumnos,4);

    in.close();

    return Clase(nombre,aula,alumnos);
}

int main()
{
    escribirClase("clases",Clase("matematicas",100,20),0);
    escribirClase("clases",Clase("espanol",110,30),1);
    escribirClase("clases",Clase("musica",120,10),2);

    cout<<leerClase("clases",0).nombre<<endl;
    cout<<leerClase("clases",0).aula<<endl;
    cout<<leerClase("clases",0).alumnos<<endl;

    cout<<leerClase("clases",1).nombre<<endl;
    cout<<leerClase("clases",1).aula<<endl;
    cout<<leerClase("clases",1).alumnos<<endl;

    cout<<leerClase("clases",2).nombre<<endl;
    cout<<leerClase("clases",2).aula<<endl;
    cout<<leerClase("clases",2).alumnos<<endl;

    return 0;
}
