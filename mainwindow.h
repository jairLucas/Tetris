#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QDateTime>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QTimer *timer{new QTimer(this)}; //Repetir una accion cierta cantidad de tiempo
    QTime time; //Objeto que representa el reloj
    unsigned lines{0};  //contador del numero de lineas
    QMessageBox msgBox;

private slots:
    //slots propios
    void updateTime();
    //slots automaticos
    void on_pushButton_quit_clicked();
    void on_pushButton_pause_clicked();
    void on_pushButton_start_clicked();

    void on_pushButton_restart_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
