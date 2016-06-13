#ifndef CLASES_H
#define CLASES_H

#include <QMainWindow>

namespace Ui {
class Clases;
}

class Clases : public QMainWindow
{
    Q_OBJECT

public:
    explicit Clases(QWidget *parent = 0);
    ~Clases();

private:
    Ui::Clases *ui;
};

#endif // CLASES_H
