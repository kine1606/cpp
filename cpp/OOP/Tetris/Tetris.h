#pragma once
#include "Shape.h"
#include <vector>
class Tetris
{
private:
    std::vector<std::vector<bool>> TetrisTable;
    Shape* ListShape[25];
public:
    Tetris();
    void print();
    void insert();
    ~Tetris();
};
