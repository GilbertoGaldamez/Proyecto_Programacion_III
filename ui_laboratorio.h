/********************************************************************************
** Form generated from reading UI file 'laboratorio.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABORATORIO_H
#define UI_LABORATORIO_H

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

class Ui_Laboratorio
{
public:
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Laboratorio)
    {
        if (Laboratorio->objectName().isEmpty())
            Laboratorio->setObjectName(QStringLiteral("Laboratorio"));
        Laboratorio->resize(400, 300);
        pushButton_3 = new QPushButton(Laboratorio);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 230, 75, 23));
        label_2 = new QLabel(Laboratorio);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 131, 41));
        QFont font;
        font.setPointSize(11);
        label_2->setFont(font);
        lineEdit = new QLineEdit(Laboratorio);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 100, 113, 20));
        pushButton_2 = new QPushButton(Laboratorio);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 230, 75, 23));
        label_3 = new QLabel(Laboratorio);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 150, 81, 16));
        label_3->setFont(font);
        label = new QLabel(Laboratorio);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 291, 41));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        lineEdit_2 = new QLineEdit(Laboratorio);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 150, 113, 20));
        pushButton = new QPushButton(Laboratorio);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 230, 75, 23));

        retranslateUi(Laboratorio);

        QMetaObject::connectSlotsByName(Laboratorio);
    } // setupUi

    void retranslateUi(QWidget *Laboratorio)
    {
        Laboratorio->setWindowTitle(QApplication::translate("Laboratorio", "Form", 0));
        pushButton_3->setText(QApplication::translate("Laboratorio", "Menu", 0));
        label_2->setText(QApplication::translate("Laboratorio", "No. de Laboratorio:", 0));
        pushButton_2->setText(QApplication::translate("Laboratorio", "Limpiar", 0));
        label_3->setText(QApplication::translate("Laboratorio", "Catedratico:", 0));
        label->setText(QApplication::translate("Laboratorio", "Formulario Para Agregar un Laboratorio", 0));
        pushButton->setText(QApplication::translate("Laboratorio", "Guardar", 0));
    } // retranslateUi

};

namespace Ui {
    class Laboratorio: public Ui_Laboratorio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABORATORIO_H
