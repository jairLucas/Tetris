#include "piece.h"
#include "ui_piece.h"

Piece::Piece(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Piece)
{
    ui->setupUi(this);
}

Piece::~Piece()
{
    delete ui;
}

void Piece::paintEvent(QPaintEvent *event){
    static const QPointF points[3] = {
        QPointF(10.0, 80.0),
        QPointF(20.0, 10.0),
        //QPointF(80.0, 30.0),
        QPointF(90.0, 70.0)};

    QPainter painte((this));
    painte.drawPolygon(points, 3);
}
