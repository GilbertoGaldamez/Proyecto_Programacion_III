#ifndef LISTA_H
#define LISTA_H
#include <Curso.h>
#include <Clase.h>

class Lista // Esta es una lista doblemente enlazada
{
    public:
        Lista();
        virtual ~Lista();

        void insertarAlInicio(Curso *);
        void insertarAlFinal(Curso *);
        void mostrarLista();
        Curso * buscarCurso(int);
        void GuardarEnArchivo();
        void leerArchivoAleatorio();
        Curso * leerArchivoAleatorio(int);
        Curso * borrarCurso(int);

    protected:
        Curso *Inicio;
        Curso *Fin;

    private:
        Curso *lista[50];
        int ingresados;
        char nombrearchivo[30];
};

#endif // LISTA_H
