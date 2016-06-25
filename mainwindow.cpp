#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clase.h"
#include "laboratorio.h"
#include "buscarclase.h"
#include "buscarlaboratorio.h"
#include "alumno.h"
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AddClases_clicked()
{
    Clase *frmclase = new Clase();
    frmclase->show();
    close();
}

void MainWindow::on_AddLabs_clicked()
{
    Laboratorio *frmlabs = new Laboratorio();
    frmlabs->show;
    close();
}

void MainWindow::on_BuscarClases_clicked()
{

    BuscarClase *frmBclase = new BuscarClase();
    frmBclase->show();
    close();

}

void MainWindow::on_BuscarLabs_clicked()
{
    BuscarLaboratorio *frmBlabs = new BuscarLaboratorio();
    frmBlabs->show();
    close();
}

void MainWindow::on_AddAlumno_clicked()
{
    Alumno *frmalumno = new Alumno();
            frmalumno->show();
            close();
}
