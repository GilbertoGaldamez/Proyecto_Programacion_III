#ifndef ALUMNO_H
#define ALUMNO_H

#include <QWidget>

namespace Ui {
class Alumno;
}

class Alumno : public QWidget
{
    Q_OBJECT

public:
    explicit Alumno(QWidget *parent = 0);
    ~Alumno();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Alumno *ui;
};

#endif // ALUMNO_H
