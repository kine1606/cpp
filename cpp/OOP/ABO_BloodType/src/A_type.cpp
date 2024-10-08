#include "../inc/A_type.h"
#include "../inc/ABO.h"
#include <iostream>
void A_type::give(ABO* x)
{
    x->received(this);
}
bool A_type::received(ABO* x)
{
    if(this->m_blood.second == true) // nhom mau A+
    {
        if(x->getBlood() == std::make_pair(3,true))
            return true;
        else if(x->getBlood() == std::make_pair(3,false))
            return true;
        else if(x->getBlood() == std::make_pair(1,true))
            return true;
        else if(x->getBlood() == std::make_pair(1,false))
            return true;
        return false;
    }
    else 
    {
        if(x->getBlood() == std::make_pair(3,false))
        {
            return true;
        }
        else if(x->getBlood() == std::make_pair(1, false))
        {
            return true;
        }
        return false;
    }
    return false;
}
