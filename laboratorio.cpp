#include "laboratorio.h"
#include "ui_laboratorio.h"
#include "mainwindow.h"
#include <cstring>
#include <iostream>
using namespace std;


Laboratorio::Laboratorio(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Laboratorio)
{
    ui->setupUi(this);
}

Laboratorio::Laboratorio() : Curso()
{
    //ctor
    cout << "Constructor 1 de Laboratorio." << endl;
    No_Laboratorio = 0;
    Instructor = new char[20];
    //strcpy(Instructor, "Ing. Fernando");
    DiasLab = 0;
}
Laboratorio::Laboratorio(int CodigoCurso, char *NombreCurso, int Hora, int Matriculados, int Cupo, int No_Laboratorio, char *Instructor, int DiasLab)
: Curso(CodigoCurso, NombreCurso, Hora, Matriculados, Cupo)  //Invoca al constructor de clase base
{
    cout << "Constructor 2 de Laboratorio." << endl;
    this->setNo_Laboratorio(No_Laboratorio);
    this->Instructor = new char [strlen(Instructor)+1];
    strcpy(this->Instructor, Instructor);
    this->setDiasLab(DiasLab);
}
Laboratorio::~Laboratorio()
{
    delete ui;
    delete [] Instructor;
}

void Laboratorio::on_pushButton_3_clicked()
{
    MainWindow *frmInicio = new MainWindow();
    frmInicio->show();
    close();
}
void Laboratorio::setNo_Laboratorio(int No_Laboratorio)
{
    this->No_Laboratorio = (No_Laboratorio > 0 && No_Laboratorio <= 10) ? No_Laboratorio : 1;
}

int Laboratorio::getNo_Laboratorio() const
{
    return No_Laboratorio;
}

void Laboratorio::setInstructor(const char *Instructor)
{
    delete [] this->Instructor;
    this->Instructor = new char [strlen(Instructor)+1];
    strcpy(this->Instructor, Instructor);
}

const char* Laboratorio::getInstructor() const
{
    return Instructor;
}

void Laboratorio::setDiasLab(int DiasLab)
{
    this->DiasLab = 6;
}

int Laboratorio::getDiasLab() const
{
    return DiasLab;
}

int Laboratorio::getCupo() const
{
    return 12;
}
