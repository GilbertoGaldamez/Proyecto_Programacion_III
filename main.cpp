#include "mainwindow.h"
#include <QApplication>
#include "clase.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Clase w;
    w.show();

    return a.exec();
}
