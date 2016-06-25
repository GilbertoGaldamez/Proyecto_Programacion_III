/********************************************************************************
** Form generated from reading UI file 'buscarclase.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCARCLASE_H
#define UI_BUSCARCLASE_H

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

class Ui_BuscarClase
{
public:
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_4;

    void setupUi(QWidget *BuscarClase)
    {
        if (BuscarClase->objectName().isEmpty())
            BuscarClase->setObjectName(QStringLiteral("BuscarClase"));
        BuscarClase->resize(400, 300);
        lineEdit_3 = new QLineEdit(BuscarClase);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 190, 113, 20));
        lineEdit_2 = new QLineEdit(BuscarClase);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 130, 113, 20));
        label = new QLabel(BuscarClase);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 10, 221, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_3 = new QLabel(BuscarClase);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 140, 91, 21));
        QFont font1;
        font1.setPointSize(11);
        label_3->setFont(font1);
        pushButton_2 = new QPushButton(BuscarClase);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 130, 75, 23));
        lineEdit = new QLineEdit(BuscarClase);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 80, 113, 20));
        pushButton_3 = new QPushButton(BuscarClase);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 160, 75, 23));
        label_2 = new QLabel(BuscarClase);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 46, 13));
        label_2->setFont(font1);
        pushButton = new QPushButton(BuscarClase);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 100, 75, 23));
        label_4 = new QLabel(BuscarClase);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 200, 46, 13));
        label_4->setFont(font1);

        retranslateUi(BuscarClase);

        QMetaObject::connectSlotsByName(BuscarClase);
    } // setupUi

    void retranslateUi(QWidget *BuscarClase)
    {
        BuscarClase->setWindowTitle(QApplication::translate("BuscarClase", "Form", 0));
        label->setText(QApplication::translate("BuscarClase", "Formulario Para Buscar Clases", 0));
        label_3->setText(QApplication::translate("BuscarClase", "Catedratico", 0));
        pushButton_2->setText(QApplication::translate("BuscarClase", "Limpiar", 0));
        pushButton_3->setText(QApplication::translate("BuscarClase", "Menu", 0));
        label_2->setText(QApplication::translate("BuscarClase", "Aula", 0));
        pushButton->setText(QApplication::translate("BuscarClase", "Buscar", 0));
        label_4->setText(QApplication::translate("BuscarClase", "Dias", 0));
    } // retranslateUi

};

namespace Ui {
    class BuscarClase: public Ui_BuscarClase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCARCLASE_H
