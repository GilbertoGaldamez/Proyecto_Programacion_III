/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *AddClases;
    QGroupBox *groupBox_5;
    QPushButton *BuscarClases;
    QPushButton *BuscarLabs;
    QLabel *label;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QPushButton *BtnSalir;
    QGroupBox *groupBox_6;
    QPushButton *AddAlumno;
    QPushButton *AddLabs;
    QGroupBox *groupBox_7;
    QPushButton *Eliminar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(390, 378);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AddClases = new QPushButton(centralWidget);
        AddClases->setObjectName(QStringLiteral("AddClases"));
        AddClases->setGeometry(QRect(60, 110, 75, 23));
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(210, 80, 141, 121));
        BuscarClases = new QPushButton(groupBox_5);
        BuscarClases->setObjectName(QStringLiteral("BuscarClases"));
        BuscarClases->setGeometry(QRect(30, 30, 75, 23));
        BuscarLabs = new QPushButton(groupBox_5);
        BuscarLabs->setObjectName(QStringLiteral("BuscarLabs"));
        BuscarLabs->setGeometry(QRect(30, 80, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 10, 231, 51));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 80, 151, 121));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(140, 90, 151, 121));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(150, 0, 151, 121));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(140, 90, 151, 121));
        BtnSalir = new QPushButton(centralWidget);
        BtnSalir->setObjectName(QStringLiteral("BtnSalir"));
        BtnSalir->setGeometry(QRect(160, 310, 75, 23));
        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(30, 210, 151, 81));
        AddAlumno = new QPushButton(groupBox_6);
        AddAlumno->setObjectName(QStringLiteral("AddAlumno"));
        AddAlumno->setGeometry(QRect(30, 30, 75, 23));
        AddLabs = new QPushButton(centralWidget);
        AddLabs->setObjectName(QStringLiteral("AddLabs"));
        AddLabs->setGeometry(QRect(60, 160, 75, 23));
        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(210, 210, 141, 80));
        Eliminar = new QPushButton(groupBox_7);
        Eliminar->setObjectName(QStringLiteral("Eliminar"));
        Eliminar->setGeometry(QRect(30, 30, 81, 23));
        MainWindow->setCentralWidget(centralWidget);
        groupBox->raise();
        AddClases->raise();
        groupBox_5->raise();
        label->raise();
        BtnSalir->raise();
        groupBox_6->raise();
        AddLabs->raise();
        groupBox_7->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        AddClases->setText(QApplication::translate("MainWindow", "Clases", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Buscar Curso", 0));
        BuscarClases->setText(QApplication::translate("MainWindow", "Clases", 0));
        BuscarLabs->setText(QApplication::translate("MainWindow", "Laboratorios", 0));
        label->setText(QApplication::translate("MainWindow", "Sistema de Matricula", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Agregar Curso", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Agregar", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Agregar", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Agregar", 0));
        BtnSalir->setText(QApplication::translate("MainWindow", "Salir", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Matricula", 0));
        AddAlumno->setText(QApplication::translate("MainWindow", "Alumno", 0));
        AddLabs->setText(QApplication::translate("MainWindow", "Laboratorios", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Acciones", 0));
        Eliminar->setText(QApplication::translate("MainWindow", "Eliminar Curso", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
