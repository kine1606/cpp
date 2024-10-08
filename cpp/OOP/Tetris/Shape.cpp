#include "Shape.h"
#include <vector>
#include <map>
#include <iostream>

Shape::Shape()
{
    m_shape.resize(4);
    for (size_t i = 0; i < 4; i++)
    {
        m_shape[i].resize(4, false);
    }
}
std::vector<std::pair<int,int>> Shape::getTrue()
{
    std::vector<std::pair<int,int>> temp;
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            if(m_shape[i][j] == true)
            {
                std::pair<int,int> boolPos;
                // std::cout<< "Gettrue" <<'\n';
                boolPos = std::make_pair(i,j);
                temp.push_back(boolPos);
            }
        }
    }
    // for (auto &&i : temp)
    // {
    //     std::cout<< i.first << " " << i.second <<'\n';
    // }
    
    return temp;
}
Shape::~Shape(){}
void IShape::BasicShape()
{
    m_shape[0][0] = true;
    m_shape[1][0] = true;
    m_shape[2][0] = true;
    m_shape[3][0] = true;    
}
void IShape::RightRotate()
{
    m_shape[1][0] = false;
    m_shape[2][0] = false;
    m_shape[3][0] = false;
    m_shape[0][1] = true;
    m_shape[0][2] = true;
    m_shape[0][3] = true;
}
void SquareShape::BasicShape()
{
    m_shape[0][0] = true;
    m_shape[0][1] = true;
    m_shape[1][1] = true;
    m_shape[1][0] = true;
}
void SquareShape::RightRotate(){}
void Z_true::BasicShape()
{
    m_shape[0][0] = true;
    m_shape[0][1] = true;
    m_shape[1][1] = true;
    m_shape[1][2] = true;
}
void Z_true::RightRotate()
{
    m_shape[0][0] = false;
    m_shape[1][2] = false;
    m_shape[0][1] = true;
    m_shape[0][2] = true;
}
void Z_false::BasicShape()
{
    m_shape[1][2] = true;
    m_shape[1][1] = true;
    m_shape[1][0] = true;
    m_shape[1][1] = true;
}
void Z_false::RightRotate()
{
    m_shape[1][2] = false;
    m_shape[1][1] = false;
    m_shape[0][0] = true;
    m_shape[2][1] = true;
}