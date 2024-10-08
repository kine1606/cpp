#include "Tetris.h"
#include "Shape.h"
int main()
{
    Tetris myGame;
    myGame.print();
    for (size_t i = 0; i < 10; i++)
    {
        myGame.insert();
        myGame.print();
    }
    
}