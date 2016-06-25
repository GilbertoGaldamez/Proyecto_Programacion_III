#ifndef BUSCARCLASE_H
#define BUSCARCLASE_H

#include <QWidget>

namespace Ui {
class BuscarClase;
}

class BuscarClase : public QWidget
{
    Q_OBJECT

public:
    explicit BuscarClase(QWidget *parent = 0);
    ~BuscarClase();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::BuscarClase *ui;
};

#endif // BUSCARCLASE_H
