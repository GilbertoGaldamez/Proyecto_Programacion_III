#include <iostream>
#include <typeinfo>
#include <cstring>
#include <Curso.h>
#include <Clase.h>
#include <Laboratorio.h>
#include <Lista.h>

using namespace std;

int main()
{
    /*Curso *cursoPtr1 = new Curso("001", "Calculo I", 1, 15, 20);
    cursoPtr->imprimir();*/

    cout << endl;

    Curso *cursoPtr2 = new Clase("002", "Calculo II", 2, 15, 20, 5, "Ing. Medardo", 1234);
    cursoPtr2->imprimir();

    cout << endl;

    Curso *cursoPtr3 = new Laboratorio("003", "Programacion III", 3, 10, 15, 7, "Ing. Allan", 7);
    cursoPtr3->imprimir();

    cout << endl;

    cout << "Lista enlazada..." << endl;
    Lista *listCursos = new Lista();
    listCursos->insertarAlFinal( new Clase("004", "Admon II", 4, 15, 30, 7, "Lic. Luis", 12345));
    listCursos->insertarAlFinal( new Laboratorio("001", "Ofimatica I", 1, 7, 25, 8, "Ing. Juan", 8));
    listCursos->insertarAlFinal( new Clase("007", "Fisica I", 6, 12, 30, 10, "Ing. Martinez", 1234));
    listCursos->insertarAlFinal( new Laboratorio("010", "Redes I", 12, 10, 15, 20, "Ing. Pedro", 8));

    cout << "\nMostrando lista en orden.." << endl;
    listCursos->mostrarLista();

    cout << endl;

    Curso * buscar = listCursos->buscarCurso("004");
    if (buscar != 0)
    {
        cout << "Curso encontrado" << endl;
        buscar->imprimir();
    }
    else
        cout << "No se encontro el Curso" << endl;

    cout << endl;

    //borrando de memoria objetos
    //delete cursoPtr1;
    delete cursoPtr2;
    delete cursoPtr3;
    delete listCursos;

    return 0;
}
