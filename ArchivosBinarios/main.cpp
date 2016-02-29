#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout<<"--Write--"<<endl;
    ofstream out("archivo");
    cout<<"Posicion actual:"<<out.tellp()<<endl;
    int numero1=10;
    out.write((char*)&numero1,4);
    cout<<"Posicion actual:"<<out.tellp()<<endl;
    int numero2=20;
    out.write((char*)&numero2,4);
    cout<<"Posicion actual:"<<out.tellp()<<endl;
    int numero3=30;
    out.write((char*)&numero3,4);
    cout<<"Posicion actual:"<<out.tellp()<<endl;
    cout<<"Seekp: 8"<<endl;
    out.seekp(8);
    cout<<"Posicion actual:"<<out.tellp()<<endl;
    int numero4=40;
    out.write((char*)&numero4,4);
    cout<<"Posicion actual:"<<out.tellp()<<endl;
    out.close();

    cout<<"--Read--"<<endl;
    ifstream in("archivo");
    cout<<"Posicion actual:"<<in.tellg()<<endl;
    int lectura;
    cout<<"Seekg: 8"<<endl;
    in.seekg(8);//in.seekg(-4,ios::end);
    cout<<"Posicion actual:"<<in.tellg()<<endl;
    in.read((char*)&lectura,4);
    cout<<"Posicion actual:"<<in.tellg()<<endl;
    in.close();

    cout<<"Lectura:"<<lectura<<endl;

    return 0;
}
