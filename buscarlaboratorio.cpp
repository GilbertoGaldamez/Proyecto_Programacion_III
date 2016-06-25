#include "buscarlaboratorio.h"
#include "ui_buscarlaboratorio.h"
#include "mainwindow.h"

BuscarLaboratorio::BuscarLaboratorio(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BuscarLaboratorio)
{
    ui->setupUi(this);
}

BuscarLaboratorio::~BuscarLaboratorio()
{
    delete ui;
}

void BuscarLaboratorio::on_pushButton_3_clicked()
{
    MainWindow *frmInicio = new MainWindow();
    frmInicio->show();
    close();
}
