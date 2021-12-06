#ifndef BLOCK_H
#define BLOCK_H

#include <QWidget>

namespace Ui {
class Block;
}

//enum Shape { NoShape, TetriminoL, TetriminoJ, TetriminoZ, TetriminoS, TetriminoI, TetriminoO, TetriminoT };

template <typename Type>
class Block : public QWidget
{
    Q_OBJECT

public:
    explicit Block(QWidget *parent = nullptr);
    ~Block();

    //void setRandomShape();
    void setShape();
    Block GetPosition();
    void moveLeft();
    void moveRight();
    void moveDown();
    void spinLeft();
    void spinRight();

private:
    Ui::Block *ui;
};


struct TetrominoL : Block<TetrominoL>{

};
struct TetrominoJ : Block<TetrominoJ>{

};
struct TetrominoZ : Block<TetrominoZ>{

};
struct TetrominoS : Block<TetrominoS>{

};
struct TetrominoI : Block<TetrominoI>{

};
struct TetrominoO : Block<TetrominoO>{

};
struct TetrominoT : Block<TetrominoT>{

};

#endif // BLOCK_H
