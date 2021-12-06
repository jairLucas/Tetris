#ifndef PIECE_H
#define PIECE_H

#include <QWidget>
#include <QPointF>
#include <QPainter>

namespace Ui {
class Piece;
}

class Piece : public QWidget
{
    Q_OBJECT

public:
    explicit Piece(QWidget *parent = nullptr);
    ~Piece();

private:
    Ui::Piece *ui;

public:
    virtual void paintEvent(QPaintEvent *event);
};

#endif // PIECE_H
