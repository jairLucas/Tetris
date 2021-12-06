#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QDateTime>
#include <QMessageBox>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //variables para el cronometro
    QTimer *timer{new QTimer(this)}; //Repetir una accion cierta cantidad de tiempo
    QTime time; //Objeto que representa el reloj
    //variables para las estadisticas
    unsigned score{0};  //score sujeto a las reglas del juego
    unsigned lines{0};  //contador del numero de lineas
    unsigned apm{0};    //contador de las acciones por minuto
    QMessageBox msgBox;

//slots propios
private slots:
    void updateTime();

//slots automaticos
private slots:
    void on_pushButton_quit_clicked();
    void on_pushButton_pause_clicked();
    void on_pushButton_start_clicked();
    void on_pushButton_restart_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
