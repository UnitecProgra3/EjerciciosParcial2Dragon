#include "Evaluador.h"

string getPrimerElemento(stack<string> mi_cola);


void evaluar()
{
    int nota = 0;

    stack<string>mi_cola_str;
    mi_cola_str.push("A");
    mi_cola_str.push("B");
    mi_cola_str.push("C");

    stack<string>mi_cola_str2;
    mi_cola_str2.push("Hola");
    mi_cola_str2.push("Mundo");

    cout<<"Ejercicio getTope:\t\t";
    if(getTope(mi_cola_str)=="C" && getTope(mi_cola_str2)=="Mundo")
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getTamano:\t\t";
    if(getTamano(mi_cola_str)==3 && getTamano(mi_cola_str2)==2)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio existeEnCola:\t\t";
    if(existeEnPila(mi_cola_str,"B")==true && existeEnPila(mi_cola_str2,"jeje")==false)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    stack<int>mi_cola_int;
    mi_cola_int.push(1);
    mi_cola_int.push(2);
    mi_cola_int.push(3);

    stack<int>mi_cola_int2;
    mi_cola_int2.push(10);
    mi_cola_int2.push(20);

    cout<<"Ejercicio getMayor:\t\t";
    if(getMayor(mi_cola_int)==3 && getMayor(mi_cola_int2)==20)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getMenor:\t\t";
    if(getMenor(mi_cola_int)==1 && getMenor(mi_cola_int2)==10)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    stack<char>mi_cola_char;
    mi_cola_char.push('z');
    mi_cola_char.push('r');
    mi_cola_char.push('a');
    mi_cola_char.push('z');
    mi_cola_char.push('a');
    mi_cola_char.push('m');

    stack<char>mi_cola_char2;
    mi_cola_char2.push('a');
    mi_cola_char2.push('r');
    mi_cola_char2.push('a');
    mi_cola_char2.push('z');
    mi_cola_char2.push('a');
    mi_cola_char2.push('a');

    stack<char>mi_cola_char3;
    mi_cola_char3.push('3');
    mi_cola_char3.push('q');
    mi_cola_char3.push('e');
    mi_cola_char3.push('b');
    mi_cola_char3.push('z');
    mi_cola_char3.push('e');

    cout<<"Ejercicio contarLetraA:\t\t";
    if(contarLetraA(mi_cola_char)==2 && contarLetraA(mi_cola_char2)==4 && contarLetraA(mi_cola_char3)==0)
    {
        nota++;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/6"<<endl;
}
