#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include <memory>
#include <QPainter>

namespace Ui {
class Board;
}

class Board : public QWidget
{
    Q_OBJECT

public:
    explicit Board(QWidget *parent = nullptr);
    ~Board();

    void SetPoints(const QPoint& a, const QPoint& b, const QPoint& c, const QPoint& d);

private:
    Ui::Board *ui;
    QPoint A{0,0};
    QPoint B{0,0};
    QPoint C{0,0};
    QPoint D{0,0};

protected:
    void paintEvent(QPaintEvent *event);

};

#endif // BOARD_H
