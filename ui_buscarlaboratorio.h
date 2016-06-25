/********************************************************************************
** Form generated from reading UI file 'buscarlaboratorio.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCARLABORATORIO_H
#define UI_BUSCARLABORATORIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BuscarLaboratorio
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *BuscarLaboratorio)
    {
        if (BuscarLaboratorio->objectName().isEmpty())
            BuscarLaboratorio->setObjectName(QStringLiteral("BuscarLaboratorio"));
        BuscarLaboratorio->resize(400, 300);
        pushButton_2 = new QPushButton(BuscarLaboratorio);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 240, 75, 23));
        pushButton_3 = new QPushButton(BuscarLaboratorio);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 240, 75, 23));
        label = new QLabel(BuscarLaboratorio);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 291, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        lineEdit_2 = new QLineEdit(BuscarLaboratorio);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 160, 113, 20));
        lineEdit = new QLineEdit(BuscarLaboratorio);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 110, 113, 20));
        pushButton = new QPushButton(BuscarLaboratorio);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 240, 75, 23));
        label_2 = new QLabel(BuscarLaboratorio);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 131, 41));
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);
        label_3 = new QLabel(BuscarLaboratorio);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 160, 81, 16));
        label_3->setFont(font1);

        retranslateUi(BuscarLaboratorio);

        QMetaObject::connectSlotsByName(BuscarLaboratorio);
    } // setupUi

    void retranslateUi(QWidget *BuscarLaboratorio)
    {
        BuscarLaboratorio->setWindowTitle(QApplication::translate("BuscarLaboratorio", "Form", 0));
        pushButton_2->setText(QApplication::translate("BuscarLaboratorio", "Limpiar", 0));
        pushButton_3->setText(QApplication::translate("BuscarLaboratorio", "Menu", 0));
        label->setText(QApplication::translate("BuscarLaboratorio", "Formulario Para Buscar un Laboratorio", 0));
        pushButton->setText(QApplication::translate("BuscarLaboratorio", "Buscar", 0));
        label_2->setText(QApplication::translate("BuscarLaboratorio", "No. de Laboratorio:", 0));
        label_3->setText(QApplication::translate("BuscarLaboratorio", "Catedratico:", 0));
    } // retranslateUi

};

namespace Ui {
    class BuscarLaboratorio: public Ui_BuscarLaboratorio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCARLABORATORIO_H
