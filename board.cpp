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
    std::unique_ptr<QPainter> painter = std::make_unique<QPainter>(this);
    painter->drawLine(A,B);
    painter->drawLine(B,D);
    painter->drawLine(D,C);
    painter->drawLine(C,A);
}


