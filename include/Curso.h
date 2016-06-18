#ifndef CURSO_H
#define CURSO_H


class Curso
{
    public:
        Curso();
        Curso(char *, char *, int, int, int);
        virtual ~Curso();

        void setCodigoCurso(const char *);
        const char *getCodigoCurso() const;

        void setNombreCurso(const char *);
        const char *getNombreCurso() const;

        void setMatriculados(int);
        int getMatriculados() const;

        void setHora(int);
        int getHora() const;

        void setCupo(int);
        // funcion es virtual pura y hace que automaticamente la clase se convierta en abstracta
        virtual int getCupo() const = 0;

        virtual void imprimir() const;

        void setAnterior(Curso *);
        Curso * getAnterior();

        void setSiguiente(Curso *);
        Curso * getSiguiente();

    protected:

    private:
        char *CodigoCurso;
        char *NombreCurso;
        int Hora;
        int Matriculados;
        int Cupo;

        Curso *Anterior;
        Curso *Siguiente;
};

#endif // CURSO_H
