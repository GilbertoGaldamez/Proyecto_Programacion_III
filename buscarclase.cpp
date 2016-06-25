#include "buscarclase.h"
#include "ui_buscarclase.h"
#include "mainwindow.h"

BuscarClase::BuscarClase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BuscarClase)
{
    ui->setupUi(this);
}

BuscarClase::~BuscarClase()
{
    delete ui;
}

void BuscarClase::on_pushButton_3_clicked()
{
    MainWindow *frmInicio = new MainWindow();
    frmInicio->show();
    close();

}
