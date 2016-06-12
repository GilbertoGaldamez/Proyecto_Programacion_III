#include "Lista.h"
#include <iostream>

using namespace std;

Lista::Lista()
{
    //ctor
    Inicio = 0;
    Fin = 0;
}

Lista::~Lista()
{
    //dtor
    cout << "Destructor de Lista." << endl;

    Curso * temp = Inicio;

    while (Inicio != 0)
    {
        Inicio = temp->getSiguiente();
        delete temp;
        temp = Inicio;
    }
}

void Lista::insertarAlInicio(Curso *nuevo)
{
    if (Inicio == 0)
    {
        Inicio = nuevo;
        Fin = nuevo;
    }

    else
    {
        nuevo->setSiguiente(Inicio);
        Inicio = nuevo;
    }
}

void Lista::insertarAlFinal(Curso *nuevo)
{
    if (Inicio == 0)
    {
        Inicio = nuevo;
        Fin = nuevo;
    }

    else
    {
        Fin->setSiguiente(nuevo);
        Fin = nuevo;
    }
}

void Lista::mostrarLista()
{
    Curso * temp = Inicio;

    while (temp != 0)
    {
        temp->imprimir();
        temp = temp->getSiguiente();
    }
}

Curso* Lista::buscarCurso(char *codigo)
{
    Curso * temp = Inicio;

    while (temp != 0)
    {
        if (codigo == temp->getCodigoCurso())
            return temp;
        temp = temp->getSiguiente();
    }
    return 0;
}
