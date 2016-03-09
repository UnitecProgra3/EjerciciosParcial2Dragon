#include <iostream>

using namespace std;

char encenderBit(char byte, int pos)
{
    char mascara = 1;
    mascara=mascara<<pos;

    char resultado = mascara|byte;

    return resultado;
}

char apagarBit(char byte, int pos)
{
    char mascara = 0;
    for(int i=0;i<8;i++)
        if(pos!=i)
            mascara = encenderBit(mascara,i);

    char resultado = mascara&byte;

    return resultado;
}

bool obtenerBit(char byte, int pos)
{
    char mascara = 1;
    mascara=mascara<<pos;

    char resultado = mascara&byte;

    return resultado;
}

int main()
{
    char byte = 9;
    byte = encenderBit(byte,6);
    byte = apagarBit(byte,3);

    for(int i=7;i>=0;i--)
    {
        cout<<obtenerBit(byte,i);
    }
    cout<<endl;
    return 0;
}
