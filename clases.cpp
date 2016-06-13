#include "clases.h"
#include "ui_clases.h"

Clases::Clases(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Clases)
{
    ui->setupUi(this);
}

Clases::~Clases()
{
    delete ui;
}
