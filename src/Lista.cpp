#include "Lista.h"
#include <iostream>
#include <fstream>
#include <cstring>

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
void Archivo::agregarCurso(const char *CodigoCurso,
                    const char *NombreCurso,
                    int Hora, int Matriculados, int Cupos)

{
    if (ingresados < 100)
    {
        Lista[ingresados] = new Curso(CodigoCurso,NombreCurso,Hora,Matriculados,Cupos);
        ingresados++;
    }
    else{
        cout << "Lista llena..." << endl;
    }
}
void Lista::guardarArchivoAleatorio()
{
    ofstream archivoSalida (nombreArchivo, ios::out | ios::binary);

        archivoSalida.write(reinterpret_cast<const char *> (Lista[i]),sizeof(Curso));
}

void Curso::mostrarCurso() const
{
    for (int i=0; i<ingresados; i++)
    {
        Lista[i]->imprimir();
        cout << endl;
    }
}

void Curso::leerArchivoAleatorio()
{
    ifstream archivoEntrada (nombreArchivo, ios::in | ios::binary);
    if (!archivoEntrada)
    {
        cout << "El archivo no existe." << endl;
        return;
    }

    Curso cursos;

    archivoEntrada.read(reinterpret_cast<char *>(&cursos), sizeof(cursos));
    while (archivoEntrada && !archivoEntrada.eof())
    {
        this->agregarCurso(cursos.getCodigoCurso(),
                             cursos.getNombreCurso(),
                             cursos.getHora(),
                             cursos.getMatriculados(),
                             cursos.getCupos());
        archivoEntrada.read(reinterpret_cast<char *>(&cursos), sizeof(Curso));
    }
}

Curso Archivo::leerArchivoAleatorio(int posicion)
{
    ifstream archivoEntrada (nombreArchivo, ios::in | ios::binary);

    Curso cursos;

    if (!archivoEntrada)
    {
        cout << "El archivo no existe." << endl;
    }

    archivoEntrada.seekg(posicion*sizeof(Curso));
    archivoEntrada.read(reinterpret_cast<char *>(&cursos), sizeof(Curso));

    return Cursos;
}
