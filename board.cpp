#include "board.h"
#include "ui_board.h"

Board::Board(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Board)
{
    ui->setupUi(this);
}

Board::~Board()
{
    delete ui;
}

void Board::SetPoints(const QPoint& a, const QPoint& b, const QPoint& c, const QPoint& d){
    A = a;
    B = b;
    C = c;
    D = d;
}
void Board::drawBoard(){
    /*
     * Dibujar marco del tablero
    */


    /*
     * Establecer el color de fondo del tablero
    */
}


unsigned char Board::GetTam(){
    return TAM;
}

void Board::paintEvent(QPaintEvent *event){
   //Borde del tablero con smart pointer
    /*
    std::unique_ptr<QPainter> painter = std::make_unique<QPainter>(this);
    painter->drawLine(A,B);
    painter->drawLine(B,D);
    painter->drawLine(D,C);
    painter->drawLine(C,A);
    painter->setBrush(QColor(255, 255, 00, 255));
*/

 /*

    Point
    std::unique_ptr<QPainter> point = std::make_unique<QPainter>(this);
    point->drawPoint(60,30);
    */

    //Definiendo el color de fondo del tablero

    QPainter painte(this);

    painte.setBrush(QColor(191, 127, 90, 255));
    painte.drawRect(0, 0, width(), height());

    QRectF rectangle(0, 0, TAM, TAM);
    painte.drawRect(rectangle);

    //poligono

        static const QPointF points[4] = {
             QPointF(TAM*3, TAM*3),
             QPointF(TAM*2, TAM*3),
             QPointF(TAM*2, TAM*4),
             QPointF(TAM*3, TAM*4),
        };
        painte.drawPolygon(points,4);
    //end poligono



}




