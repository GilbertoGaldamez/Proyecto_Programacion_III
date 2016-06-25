#ifndef CLASE_H
#define CLASE_H
#include <Curso.h>
#include <QWidget>

namespace Ui {
class Clase;
}

class Clase : public Curso, QWidget
{
    Q_OBJECT

public:
    explicit Clase(QWidget *parent = 0);

    Clase ();
    Clase(int, char *, int, int, int, int, char *, int);
    virtual ~Clase();

    void setAula(int);
    int getAula() const;

    void setCatedratico(const char *);
    const char *getCatedratico() const;

    void setDias(int);
    int getDias() const;

    virtual int getCupo() const;

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::Clase *ui;
    int Aula;
    char *Catedratico;
    int Dias;
};

#endif // CLASE_H
