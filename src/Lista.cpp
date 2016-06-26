#include "Lista.h"
#include "Curso.h"
#include "Clase.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

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

Curso* Lista::buscarCurso(int codigo)
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

void Lista::GuardarEnArchivo()
{
    Curso * temp = Inicio;

    ofstream temp1 ("Cursos.txt", ios::out | ios::binary);
    while (temp != 0)
    {
        temp1.write(reinterpret_cast<const char *> (&temp),sizeof(Curso));
        temp = temp->getSiguiente();
    }
    cout <<"Datos guardados en ''Cursos.txt''" << endl;
}
// codigo para borrar determinado Curso. Agregado 06/26/2016 5:00 am.
Curso* Lista::borrarCurso(int codigo)
{
    Curso * temp = this->buscarCurso(codigo);

    if (temp != 0)
    {
        if ((temp->getSiguiente() != 0) && (temp->getAnterior() != 0))
        {
            temp->getAnterior()->setSiguiente(temp->getSiguiente());
            temp->getSiguiente()->setAnterior(temp->getAnterior());
            delete temp;
            cout << "Curso eliminado, mostrando lista actualizada:" << endl;
            mostrarLista();
        }
        else if ( (temp->getAnterior() == 0) && (temp->getSiguiente() != 0))
        {
            temp->getSiguiente()->setAnterior(0);
            Inicio = temp->getSiguiente();
            delete temp;
            cout << "Curso eliminado, mostrando lista actualizada:" << endl;
            mostrarLista();
        }
        else if ( (temp->getAnterior() != 0) && (temp->getSiguiente() == 0))
        {
            temp->getAnterior()->setSiguiente(0);
            Fin = temp->getAnterior();
            delete temp;
            cout << "Curso eliminado, mostrando lista actualizada:" << endl;
            mostrarLista();
        }
        else
        {
            delete temp;
            Inicio = 0;
            Fin = 0;
            cout << "Curso eliminado, mostrando lista actualizada:" << endl;
            mostrarLista();
        }
    }
    else
    {
        cout << "No se encontro el Curso, mostrando lista:" << endl;
        mostrarLista();
    }

    return 0;
}

Curso * Lista::leerArchivoAleatorio(int posicion)
{
    ifstream lectura ("Cursos.txt", ios::in | ios::binary);

    Curso * cursos;

    if (!lectura)
    {
        cout << "El archivo no existe." << endl;
    }

    lectura.seekg(posicion*sizeof(Curso));
    lectura.read(reinterpret_cast<char *>(&cursos), sizeof(Curso));

    cout << "Curso encontrado: " << endl;

    return cursos;
}

/*void Lista::leerArchivoAleatorio()
{
    ifstream lectura ("nombrearchivo.txt", ios::in | ios::binary);
    if (!lectura)
    {
        cout << "El archivo no existe." << endl;
        return;
    }

    Curso * cursos;

    lectura.read(reinterpret_cast<char *>(&cursos), sizeof(Curso));
    while (lectura && !lectura.eof())
    {
        this->Curso(cursos.getCodigoCurso(),
                             cursos.getNombreCurso(),
                             cursos.getMatriculados(),
                            cursos.getHora(),
                             cursos.getCupo());
        lectura.read(reinterpret_cast<char *>(&cursos), sizeof(Curso));
    }
}
*/
