#ifndef EVALUADOR_H
#define EVALUADOR_H

#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;

void evaluar();
string getTope(stack<string> mi_pila);
int getTamano(stack<string> mi_pila);
bool existeEnPila(stack<string> mi_pila, string str);
int getMayor(stack<int> mi_pila);
int getMenor(stack<int> mi_pila);
int contarLetraA(stack<char> mi_pila);

#endif // EVALUADOR_H
