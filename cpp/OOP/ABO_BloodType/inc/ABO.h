#pragma once
class ABO
{
protected:
    std::pair <int, bool> m_blood;
public:
    void input();
    void output();
    std::pair<int,bool> getBlood();
    virtual bool received(ABO*);
    virtual void give(ABO*);
    // ~ABO();
};