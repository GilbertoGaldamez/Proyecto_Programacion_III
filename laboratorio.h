#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "curso.h"
#include <QWidget>

namespace Ui {
class Laboratorio;
}

class Laboratorio : public Curso, QWidget
{
    Q_OBJECT

public:
    explicit Laboratorio(QWidget *parent = 0);
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



private slots:
    void on_pushButton_3_clicked();

private:
    Ui::Laboratorio *ui;
         int No_Laboratorio;
           char *Instructor;
           int DiasLab;
};

#endif // LABORATORIO_H
