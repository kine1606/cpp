#include "Tetris.h"
#include <iostream>
#include <cmath>
Tetris::Tetris()
{
    TetrisTable.resize(8);
    for (size_t i = 0; i < 8; i++)
    {
        TetrisTable[i].resize(10, false);
    }
    srand(time(NULL));
    int count(0);
    while(true)
    {
        if(TetrisTable[rand()%8][rand()%10]) continue;
        TetrisTable[rand()%8][rand()%10] = true;    
        count++;
        if(count == 25) break;
    }
    for (size_t i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            ListShape[i] = new IShape();
            break;
        case 1:
            ListShape[i] = new SquareShape();
            break;
        case 2:
            ListShape[i] = new Z_true();
            break;
        case 3:
            ListShape[i] = new Z_false();
            break;
        // case 4:
        //     ListShape[i] = new L_true();
        //     break;
        // case 5: 
        //     ListShape[i] = new L_false();            
        //     break;
        // case 6: 
        //     ListShape[i] = new TShape();
        //     break;
        // }
        }
        ListShape[i]->BasicShape();
    }   
}
void Tetris::print()
{
    for (size_t i = 0; i < 8; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            if(TetrisTable[i][j])
            {
                std::cout<< " X ";
            }
            else
            {
                std::cout<< " . " ;
            }
        }
        std::cout <<'\n';
    }
}
void Tetris::insert()
{
    int index = rand()%4;
    switch (index)
    {
    case 0:
        std::cout<< "X" <<'\n';
        std::cout<< "X" <<'\n';
        std::cout<< "X" <<'\n';
        std::cout<< "X" <<'\n';
        break;
    case 1:
        std::cout<< "X X" <<'\n';
        std::cout<< "X X" <<'\n';
        break;
    case 2:
        std::cout << "X X" << '\n';
        std::cout<< "  X X" <<'\n';
        break;
    case 3:
        std::cout<< "  X X" <<'\n';
        std::cout<< "X X" <<'\n';
        break;
    }
    std::cout<< "Nhap vi tri: ";
    int x, y;
    std::cin>> x >> y;
    int count(0);

    std::vector<std::pair<int,int>> myCheck = ListShape[index]->getTrue();
    for (size_t i = 0; i < 4; i++)
    {
                // std::cout<< "myCheck[i].first= "<< myCheck[i].first <<'\n';
        // std::cout<< "myCheck[i].second= "<< myCheck[i].second<<'\n';
// 
        myCheck[i].first +=x;
        myCheck[i].second +=y;
        // std::cout<< "myCheck[i].first= "<< myCheck[i].first <<'\n';
        // std::cout<< "myCheck[i].second= "<< myCheck[i].second<<'\n';
        // std::cout<< "True" <<'\n';
        int haha = myCheck[i].first;
        int hihi = myCheck[i].second;

        if(TetrisTable[haha][hihi] == true || haha >=8 || hihi >= 10) 
        {
            std::cout<< "Khong The them" <<'\n';
            return;
        }
        else
        {
            count++;
        }
    }        
    if(count==4)
    {
        while(count--)
        {
            TetrisTable[myCheck[count].first][myCheck[count].second] = true;
        }
    }
}
Tetris::~Tetris(){}