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

    protected:
        Curso *Inicio;
        Curso *Fin;

    private:
};

#endif // LISTA_H
