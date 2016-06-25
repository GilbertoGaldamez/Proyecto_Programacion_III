/********************************************************************************
** Form generated from reading UI file 'clase.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASE_H
#define UI_CLASE_H

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

class Ui_Clase
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Clase)
    {
        if (Clase->objectName().isEmpty())
            Clase->setObjectName(QStringLiteral("Clase"));
        Clase->resize(400, 300);
        pushButton = new QPushButton(Clase);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 120, 75, 23));
        label = new QLabel(Clase);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 30, 231, 51));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setLayoutDirection(Qt::RightToLeft);
        lineEdit_2 = new QLineEdit(Clase);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 150, 113, 20));
        lineEdit_3 = new QLineEdit(Clase);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 210, 113, 20));
        pushButton_2 = new QPushButton(Clase);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 150, 75, 23));
        label_2 = new QLabel(Clase);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 46, 13));
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);
        label_4 = new QLabel(Clase);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 220, 46, 13));
        label_4->setFont(font1);
        label_3 = new QLabel(Clase);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 160, 91, 21));
        label_3->setFont(font1);
        pushButton_3 = new QPushButton(Clase);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 180, 75, 23));
        lineEdit = new QLineEdit(Clase);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 100, 113, 20));

        retranslateUi(Clase);

        QMetaObject::connectSlotsByName(Clase);
    } // setupUi

    void retranslateUi(QWidget *Clase)
    {
        Clase->setWindowTitle(QApplication::translate("Clase", "Form", 0));
        pushButton->setText(QApplication::translate("Clase", "Guardar", 0));
        label->setText(QApplication::translate("Clase", "Formulario para Agregar Clase", 0));
        pushButton_2->setText(QApplication::translate("Clase", "Limpiar", 0));
        label_2->setText(QApplication::translate("Clase", "Aula", 0));
        label_4->setText(QApplication::translate("Clase", "Dias", 0));
        label_3->setText(QApplication::translate("Clase", "Catedratico", 0));
        pushButton_3->setText(QApplication::translate("Clase", "Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class Clase: public Ui_Clase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASE_H
