#ifndef BUSCARLABORATORIO_H
#define BUSCARLABORATORIO_H

#include <QWidget>

namespace Ui {
class BuscarLaboratorio;
}

class BuscarLaboratorio : public QWidget
{
    Q_OBJECT

public:
    explicit BuscarLaboratorio(QWidget *parent = 0);
    ~BuscarLaboratorio();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::BuscarLaboratorio *ui;
};

#endif // BUSCARLABORATORIO_H
