#ifndef LISTA_H
#define LISTA_H
#include <Curso.h>

class Lista
{
    public:
        Lista();
        virtual ~Lista();
        void insertarAlInicio(Curso *);
        void insertarAlFinal(Curso *);
        void mostrarLista();
        Curso * buscarCurso(char *);
        void agregarCurso(const char *, const char *,int, int, int);
        void Mostrarcurso ; const
        void guardarArchivoAleatorio();
        void leerArchivoAleatorio();

        Curso leerArchivoAleatorio (int);

    protected:
        Curso * Lista[100];
        int ingresados;
        char nombreArchivo [100];
        Curso *Inicio;
        Curso *Fin;

    private:
};

#endif // LISTA_H
