#include "../inc/B_type.h"
#include "../inc/ABO.h"
#include <iostream>

void B_type::give(ABO* x)
{
    x->received(this);
}
bool B_type::received(ABO* x)
{
    if(this->m_blood.second == true)
    {
        if(x->getBlood() == std::make_pair(3,true))
            return true;
        else if(x->getBlood() == std::make_pair(3,false))
            return true;
        else if(x->getBlood() == std::make_pair(2,true))
            return true;
        else if(x->getBlood() == std::make_pair(2,false))
            return true;
    }
    else 
    {
        if(x->getBlood() == std::make_pair(2,false))
            return true;
        else if(x->getBlood() == std::make_pair(3,false))
            return true;
    }
    return false;
}