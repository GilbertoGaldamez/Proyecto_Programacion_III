#include "Curso.h"
#include <cstring>
#include <iostream>

using namespace std;

Curso::Curso()
{
    //ctor
    cout << "Constructor 1 de Curso." << endl;
    CodigoCurso = new char[10];
    NombreCurso = new char[20];
    strcpy(CodigoCurso,"000");
    strcpy(NombreCurso,"NuevoCurso");

    Hora = 0;
    Matriculados = 0;
    Cupo = 0;

    Anterior = 0;
    Siguiente = 0;
}

Curso::Curso(char *CodigoCurso, char *NombreCurso, int Hora, int Matriculados, int Cupo)
{
    cout << "Constructor 2 de Curso." << endl;
    this->CodigoCurso = new char [strlen(CodigoCurso)+1];
    this->NombreCurso = new char [strlen(NombreCurso)+1];
    strcpy(this->CodigoCurso, CodigoCurso);
    strcpy(this->NombreCurso, NombreCurso);

    this->setHora(Hora);
    this->setMatriculados(Matriculados);
    this->setCupo(Cupo);

    Anterior = 0;
    Siguiente = 0;
}

Curso::~Curso()
{
    //dtor
    cout << "Destructor de Curso" << endl;
    delete [] CodigoCurso;
    delete [] NombreCurso;
}

void Curso::setCodigoCurso(const char *CodigoCurso)
{
    delete [] this->CodigoCurso;
    this->CodigoCurso = new char [strlen(CodigoCurso)+1];
    strcpy(this->CodigoCurso, CodigoCurso);
}

const char* Curso::getCodigoCurso() const
{
    return CodigoCurso;
}

void Curso::setNombreCurso(const char *NombreCurso)
{
    delete [] this->NombreCurso;
    this->NombreCurso = new char [strlen(NombreCurso)+1];
    strcpy(this->NombreCurso, NombreCurso);
}

const char* Curso::getNombreCurso() const
{
    return NombreCurso;
}

void Curso::setHora(int Hora)
{
    this->Hora = (Hora >= 0 && Hora < 24) ? Hora : 0; // valida la hora
}

int Curso::getHora() const
{
    return Hora;
}

void Curso::setMatriculados(int Matriculados)
{
    this->Matriculados = (Matriculados > 0) ? Matriculados : 0;
}

int Curso::getMatriculados() const
{
    return Matriculados;
}

void Curso::setCupo(int Cupo)
{
    this->Cupo = (Cupo > 0 && Cupo <= 30) ? Cupo : 0;
}

int Curso::getCupo() const
{
    return Cupo;
}

void Curso::imprimir() const
{
    cout << "\n|| Informacion del curso ||" << endl
         << "\nCodigo del Curso: " << getCodigoCurso()
         << "\nNombre del Curso: " << getNombreCurso()
         << "\nHora del Curso: " << getHora() << " PM"
         << "\nCantidad de Alumnos matriculados: " << getMatriculados()
         << "\nCupo del Curso: " << getCupo() << endl;
}

void Curso::setAnterior(Curso * nuevo)
{
    this->Anterior = nuevo;
}

Curso* Curso::getAnterior()
{
    return Anterior;
}

void Curso::setSiguiente(Curso * nuevo)
{
    this->Siguiente = nuevo;
}

Curso* Curso::getSiguiente()
{
    return Siguiente;
}
