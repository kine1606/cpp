#pragma once
#include <vector>
#include <map>
class Shape
{
protected:
    std::vector<std::vector<bool>> m_shape;
public:
    Shape();
    ~Shape();
    std::vector<std::pair<int,int>> getTrue();
    virtual void BasicShape() =0;
    virtual void RightRotate() =0;
};
class IShape : public Shape
{
public:
    void BasicShape() override;
    void RightRotate() override;
};
class SquareShape: public Shape
{
public:
    void BasicShape() override;
    void RightRotate();
};
class Z_true : public Shape
{
public: 
    void BasicShape() override;
    void RightRotate() override;
};
class Z_false : public Shape
{
public:
    void BasicShape() override;
    void RightRotate() override;
};
// class L_true : public Shape
// {
// public: 
//     void BasicShape() override;
//     void RightRotate() override;
//     void Right_RightRotate() ;
//     void Right_Right_RightRotate();
// };
// class L_false : public Shape
// {
// public: 
//     void BasicShape() override;
//     void RightRotate() override;
//     void Right_RightRotate() ;
//     void Right_Right_RightRotate();
// };
// class TShape: public Shape
// {
// public: 
//     void BasicShape() override;
//     void RightRotate() override;
//     void Right_RightRotate() ;
//     void Right_Right_RightRotate();
// };