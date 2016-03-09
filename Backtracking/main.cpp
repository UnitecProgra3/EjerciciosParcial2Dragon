#include <iostream>

using namespace std;

class Nodo
{
public:
    int valor;
    Nodo* hijo_izq;
    Nodo* hijo_der;

    Nodo(int valor)
    {
        this->valor=valor;
        this->hijo_izq=NULL;
        this->hijo_der=NULL;
    }
};

void imprimir(Nodo* raiz)
{
    if(raiz==NULL)
        return;

    cout<<raiz->valor<<endl;

    imprimir(raiz->hijo_izq);
    imprimir(raiz->hijo_der);
}

bool existe(Nodo*raiz, int valor)
{
    if(raiz==NULL)
        return false;

    if(raiz->valor==valor)
        return true;

    bool existe_izq = existe(raiz->hijo_izq,valor);
    bool existe_der = existe(raiz->hijo_der,valor);

    return existe_izq || existe_der;
}

int getMax(Nodo* raiz)
{
    if(raiz==NULL)
        return 0;

    int actual = raiz->valor;
    int mayor_izq=getMax(raiz->hijo_izq);
    int mayor_der=getMax(raiz->hijo_der);

    if(mayor_izq>mayor_der && mayor_izq>actual)
        return mayor_izq;
    else if(mayor_der>actual)
        return mayor_der;
    else
        return actual;
}

int main()
{
    Nodo* n1=new Nodo(1);
    Nodo* n2=new Nodo(2);
    Nodo* n3=new Nodo(3);
    Nodo* n4=new Nodo(4);
    Nodo* n5=new Nodo(5);
    Nodo* n6=new Nodo(6);
    Nodo* n7=new Nodo(7);

    n1->hijo_izq = n2;
    n1->hijo_der = n3;
    n2->hijo_izq = n4;
    n2->hijo_der = n5;
    n3->hijo_izq = n6;
    n6->hijo_der = n7;

    cout<<getMax(n1)<<endl;

    return 0;
}
