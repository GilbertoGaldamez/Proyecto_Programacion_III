#include "Clase.h"
#include <cstring>
#include <iostream>

using namespace std;

Clase::Clase() : Curso()  //Invoca al constructor de clase base
{
    //ctor
    cout << "Constructor 1 de Clase." << endl;
    Aula = 0;
    Catedratico = new char[20];
    strcpy(Catedratico, "Ing. Allan");
    Dias = 0;
}

Clase::Clase(int CodigoCurso, char *NombreCurso, int Hora, int Matriculados, int Cupo, int Aula, char *Catedratico, int Dias)
: Curso(CodigoCurso, NombreCurso, Hora, Matriculados, Cupo)  //Invoca al constructor de clase base
{
    cout << "Constructor 2 de Clase." << endl;
    this->setAula(Aula);
    this->Catedratico = new char [strlen(Catedratico)+1];
    strcpy(this->Catedratico, Catedratico);
    this->setDias(Dias);
}

Clase::~Clase()
{
    //dtor
    cout << "Destructor de Clase." << endl;
    delete [] Catedratico;
}

void Clase::setAula(int Aula)
{
    this->Aula = (Aula > 0 && Aula <= 50) ? Aula : 1;
}

int Clase::getAula() const
{
    return Aula;
}

void Clase::setCatedratico(const char *Catedratico)
{
    delete [] this->Catedratico;
    this->Catedratico = new char [strlen(Catedratico)+1];
    strcpy(this->Catedratico, Catedratico);
}

const char* Clase::getCatedratico() const
{
    return Catedratico;
}

void Clase::setDias(int Dias)
{
    this->Dias = (Dias == 1234 || Dias == 12345 || Dias == 6) ? Dias : 0;
}

int Clase::getDias() const
{
    return Dias;
}

int Clase::getCupo() const
{
    return 30;
}

void Clase::imprimir() const
{
    Curso::imprimir();

    cout << "Aula: " << getAula()
         << "\nCatedratico: " << getCatedratico()
         << "\nDias: " << getDias() << endl;
}

