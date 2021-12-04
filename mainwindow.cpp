#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //coneccion del timer para que actualize el cronometro cada segundo
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    timer->start(1000);
}
/*
 * Metodo para la actualización del cronometro
*/
void MainWindow::updateTime(){
    time=time.addSecs(1);
    QString time_text = time.toString("m:ss");
    ui->label_time->setText(time_text);
}



MainWindow::~MainWindow()
{
    delete ui;
}
/*
 * Metodos para actualizar el cronometro usando QTimer y QTime
*/
/*
void MainWindow::definirResultadoFinal(){

    //si las piezas tocan el borde superior pierde
    msgBox.setWindowTitle("Juego Terminado");
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    msgBox.setEscapeButton(QMessageBox::No);
}
*/

/*
 * #############################################################
*/

void MainWindow::on_pushButton_quit_clicked()
{
    QCoreApplication::quit();
}


void MainWindow::on_pushButton_pause_clicked()
{
    //detener el cronometro
    timer->stop();

    //mostrar mensaje de pausa del cronometro
    msgBox.setWindowTitle("PAUSA");
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Ok);
    msgBox.setText("Juego Pausado\n¿Continuar?");
    if (QMessageBox::Ok == msgBox.exec()){
        timer->start();
    }
}


void MainWindow::on_pushButton_start_clicked()
{
    //inicializando el cronometro
    time.setHMS(0,0,0);
    QString time_text = time.toString("m:ss");
    ui->label_time->setText(time_text);

}

void MainWindow::on_pushButton_restart_clicked()
{
    time.setHMS(0,0,0);
    QString time_text = time.toString("m:ss");
    ui->label_time->setText(time_text);
}

