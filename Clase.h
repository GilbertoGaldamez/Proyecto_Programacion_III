#ifndef CLASE_H
#define CLASE_H

#include <Curso.h>


class Clase : public Curso
{
    public:
        Clase();
        Clase(int, char *, int, int, int, int, char *, int);
        virtual ~Clase();

        void setAula(int);
        int getAula() const;

        void setCatedratico(const char *);
        const char *getCatedratico() const;

        void setDias(int);
        int getDias() const;

        virtual int getCupo() const;

        void imprimir() const;

    protected:

    private:
        int Aula;
        char *Catedratico;
        int Dias;
};

#endif // CLASE_H
