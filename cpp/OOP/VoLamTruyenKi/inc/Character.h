#pragma once

class Character     // base class of monster and player
{
protected:
    int m_capDo;
    int m_satThuong;
    int m_nguHanh;
public:
    Character();
    virtual int dmg_dealTo(Character*);
    virtual void input(); 
    virtual void output(); 
    ~Character();
};
