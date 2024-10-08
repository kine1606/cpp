#pragma once
#include <string>
class BinaryOptionObject
{
protected:
    int m_ID;
    int m_type;
public:
    BinaryOptionObject();
    BinaryOptionObject(int, int);
    virtual void input();
    virtual void output();
    virtual ~BinaryOptionObject();
    friend class QuanLyTroChoi;
};
