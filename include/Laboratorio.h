#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <Curso.h>


class Laboratorio : public Curso
{
    public:
        Laboratorio();
        Laboratorio(int, char *, int, int, int, int, char *, int);
        virtual ~Laboratorio();

        void setNo_Laboratorio(int);
        int getNo_Laboratorio() const;

        void setInstructor(const char *);
        const char * getInstructor() const;

        void setDiasLab(int);
        int getDiasLab() const;

        virtual int getCupo() const;

        void imprimir() const;

    protected:

    private:
        int No_Laboratorio;
        char *Instructor;
        int DiasLab;
};

#endif // LABORATORIO_H
