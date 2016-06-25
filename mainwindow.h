#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_AddClases_clicked();

    void on_AddLabs_clicked();

    void on_BuscarClases_clicked();

    void on_BuscarLabs_clicked();

    void on_AddAlumno_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
