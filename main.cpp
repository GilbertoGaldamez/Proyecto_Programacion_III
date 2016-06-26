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

    cout << "\nProgramacion III"
         << "\nIng. Allan Villatoro"
         << "\nProyecto: Sistema de registro de Universidad"
         << "\nEquipo Integrantes:"
         << "\nJorge Luis Torres (61211143)"
         << "\nMaynor Gonzalo Cruz (61411415)"
         << "\nGilberto Antonio Galdamez (61411121)"
         << endl;

    cout << endl;

    Curso *cursoPtr2 = new Clase(002, "Calculo II", 2, 15, 20, 5, "Ing. Medardo", 1234);
    cursoPtr2->imprimir();

    cout << endl;

    Curso *cursoPtr3 = new Laboratorio(003, "Programacion III", 3, 10, 15, 7, "Ing. Allan", 7);
    cursoPtr3->imprimir();

    cout << endl;
    cout << endl;

    cout << "Lista enlazada..." << endl;
    Lista *listCursos = new Lista();
    listCursos->insertarAlFinal( new Clase(4, "Admon II", 4, 15, 30, 7, "Lic. Luis", 12345));
    listCursos->insertarAlFinal( new Laboratorio(1, "Ofimatica I", 1, 7, 25, 8, "Ing. Juan", 8));
    listCursos->insertarAlFinal( new Clase(7, "Fisica I", 6, 12, 30, 10, "Ing. Martinez", 1234));
    listCursos->insertarAlFinal( new Laboratorio(10, "Redes I", 12, 10, 15, 20, "Ing. Pedro", 8));

    cout << "\nMostrando lista en orden..." << endl;
    listCursos->mostrarLista();

    cout << endl;
    cout << endl;

    cout << "Buscar Curso en Lista enlazada..." << endl;
    Curso *buscarEnLista = listCursos->buscarCurso(7);
    if (buscarEnLista != 0)
    {
        cout << "Curso encontrado:" << endl;
        buscarEnLista->imprimir();
    }
    else
        cout << "No se encontro el Curso" << endl;

    cout << endl;
    cout << endl;

    cout << "Guardando el contenido de la lista enlazada en el archivo binario..." << endl;
    listCursos->GuardarEnArchivo();

    cout << endl;
    cout << endl;

    cout << "Eliminar Curso en Lista enlazada..." << endl;
    Curso *eliminarEnLista = listCursos->borrarCurso(7);

    cout << endl;
    cout << endl;

    cout << "Leer registro desde el archivo binario..." << endl;
    Curso *buscarEnArchivo = listCursos->leerArchivoAleatorio(7);
    buscarEnArchivo->imprimir();

    cout << endl;
    cout << endl;

    //borrando de memoria objetos
    //delete cursoPtr1;
    delete cursoPtr2;
    delete cursoPtr3;
    delete listCursos;
    delete buscarEnLista;
    delete buscarEnArchivo;
    delete eliminarEnLista;

    return 0;
}
