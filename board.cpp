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

void Board::paintEvent(QPaintEvent *event){
    //smart pointer
    QPainter painter((this));
    painter.setBrush(QColor(242, 237, 208, 255));
    painter.drawRect(0, 0, width(), height());
    //std::unique_ptr<QPainter> painter = std::make_unique<QPainter>(this);
    painter.drawLine(A,B);
    painter.drawLine(B,D);
    painter.drawLine(D,C);
    painter.drawLine(C,A);

    //Coloreando el tablero
    static const QPointF points[8] = {
        QPointF(TAM*0, TAM*0),
        QPointF(TAM*0, TAM*1),
        QPointF(TAM*1, TAM*1),
        QPointF(TAM*1, TAM*2),
        QPointF(TAM*2, TAM*2),
        QPointF(TAM*2, TAM*1),
        QPointF(TAM*3, TAM*1),
        QPointF(TAM*3, TAM*0)
    };

    painter.drawPolygon(points, 8);


}


