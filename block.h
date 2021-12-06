#ifndef BLOCK_H
#define BLOCK_H

template <typename Type>
class Block
{
public:
    Block();
    //void setRandomShape();
    void setShape();
    Block GetPosition();
    void moveLeft();
    void moveRight();
    void moveDown();
    void spinLeft();
    void spinRight();

private:

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

