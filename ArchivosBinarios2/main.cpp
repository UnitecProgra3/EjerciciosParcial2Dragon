#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void escribirNum(string nombre_archivo, int num, int pos)
{
    ofstream out(nombre_archivo.c_str(),ios::in);
    if(!out.is_open())
    {
        out.open(nombre_archivo.c_str());
    }
    out.seekp(pos*4);
    out.write((char*)&num,4);
    out.close();
}

int leerNum(string nombre_archivo, int pos)
{
    ifstream in(nombre_archivo.c_str());
    in.seekg(pos*4);
    int respuesta;
    in.read((char*)&respuesta,4);
    in.close();
    return respuesta;
}

//void escribirNums(string nombre_archivo, vector<int>registros)
//{
//
//}

vector<int> leerNums(string nombre_archivo)
{
    ifstream in(nombre_archivo.c_str());
    in.seekg(0,ios::end);
    int tamano_archivo = in.tellg();
    int cant_registros = tamano_archivo/4;
    in.seekg(0,ios::beg);

    vector<int> registros;
    for(int i=0;i<cant_registros;i++)
    {
        int registro;
        in.read((char*)&registro,4);
        registros.push_back(registro);
    }

    in.close();

    return registros;
}

int main()
{

    cout<<"--Escribir--"<<endl;
    escribirNum("archivo",10,0);
    escribirNum("archivo",20,1);
    escribirNum("archivo",30,2);
    escribirNum("archivo",40,1);

    cout<<"--Leer--"<<endl;
    cout<<leerNum("archivo",0)<<endl;//10
    cout<<leerNum("archivo",1)<<endl;//20
    cout<<leerNum("archivo",2)<<endl;//30

    cout<<"--Leer vector--"<<endl;
    cout<<leerNums("archivo")[0]<<endl;//10
    cout<<leerNums("archivo")[1]<<endl;//20
    cout<<leerNums("archivo")[2]<<endl;//30
    cout<<"Tamano: "<<leerNums("archivo").size()<<endl;//3

    return 0;
}
