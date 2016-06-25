/********************************************************************************
** Form generated from reading UI file 'alumno.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALUMNO_H
#define UI_ALUMNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Alumno
{
public:
    QLabel *label_2;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_8;
    QLineEdit *lineEdit_6;
    QLabel *label_3;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QComboBox *cbxcarrera;

    void setupUi(QWidget *Alumno)
    {
        if (Alumno->objectName().isEmpty())
            Alumno->setObjectName(QStringLiteral("Alumno"));
        Alumno->resize(408, 474);
        label_2 = new QLabel(Alumno);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 111, 16));
        lineEdit_7 = new QLineEdit(Alumno);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(180, 300, 191, 61));
        lineEdit_2 = new QLineEdit(Alumno);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 110, 191, 20));
        lineEdit = new QLineEdit(Alumno);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 70, 191, 20));
        label_4 = new QLabel(Alumno);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 160, 61, 16));
        pushButton_3 = new QPushButton(Alumno);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 410, 75, 23));
        label_6 = new QLabel(Alumno);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 200, 81, 16));
        label_7 = new QLabel(Alumno);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 250, 101, 16));
        label = new QLabel(Alumno);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 0, 141, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_8 = new QLabel(Alumno);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 300, 81, 16));
        lineEdit_6 = new QLineEdit(Alumno);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(180, 240, 191, 21));
        label_3 = new QLabel(Alumno);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 110, 141, 20));
        lineEdit_5 = new QLineEdit(Alumno);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(180, 200, 191, 21));
        pushButton = new QPushButton(Alumno);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 410, 75, 23));
        pushButton_2 = new QPushButton(Alumno);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 410, 75, 23));
        cbxcarrera = new QComboBox(Alumno);
        cbxcarrera->setObjectName(QStringLiteral("cbxcarrera"));
        cbxcarrera->setGeometry(QRect(180, 150, 191, 21));

        retranslateUi(Alumno);

        QMetaObject::connectSlotsByName(Alumno);
    } // setupUi

    void retranslateUi(QWidget *Alumno)
    {
        Alumno->setWindowTitle(QApplication::translate("Alumno", "Form", 0));
        label_2->setText(QApplication::translate("Alumno", "Nombre del Alumno", 0));
        label_4->setText(QApplication::translate("Alumno", "Carrera", 0));
        pushButton_3->setText(QApplication::translate("Alumno", "Limpiar", 0));
        label_6->setText(QApplication::translate("Alumno", "Telefono", 0));
        label_7->setText(QApplication::translate("Alumno", "Lugar de Nacimiento", 0));
        label->setText(QApplication::translate("Alumno", "Datos del Alumno", 0));
        label_8->setText(QApplication::translate("Alumno", "Direccion", 0));
        label_3->setText(QApplication::translate("Alumno", "Asigna Numero de Cuenta", 0));
        pushButton->setText(QApplication::translate("Alumno", "Guardar", 0));
        pushButton_2->setText(QApplication::translate("Alumno", "Menu", 0));
        cbxcarrera->clear();
        cbxcarrera->insertItems(0, QStringList()
         << QApplication::translate("Alumno", "Ing. Informatica", 0)
         << QApplication::translate("Alumno", "Ing. Logistica", 0)
         << QApplication::translate("Alumno", "Lic. Administracion", 0)
         << QApplication::translate("Alumno", "Lic. Recurso H.", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class Alumno: public Ui_Alumno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALUMNO_H
