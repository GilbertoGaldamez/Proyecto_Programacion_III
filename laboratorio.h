#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <QMainWindow>

namespace Ui {
class Laboratorio;
}

class Laboratorio : public QMainWindow
{
    Q_OBJECT

public:
    explicit Laboratorio(QWidget *parent = 0);
    ~Laboratorio();

private:
    Ui::Laboratorio *ui;
};

#endif // LABORATORIO_H
