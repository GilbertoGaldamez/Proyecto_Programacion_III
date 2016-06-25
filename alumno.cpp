#include "alumno.h"
#include "ui_alumno.h"
#include "mainwindow.h"
Alumno::Alumno(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Alumno)
{
    ui->setupUi(this);
}

Alumno::~Alumno()
{
    delete ui;
}

void Alumno::on_pushButton_2_clicked()
{
    MainWindow *frminicio = new MainWindow();
    frminicio->show();
    close();
}
