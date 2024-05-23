#include "NhanVat.h"
#include <string>
#include <iostream>

HeHoa::HeHoa() =default;
int HeHoa::m_damageDeal(std::string element)
{
    if(element== "Tho")
        return (m_level*5) + (m_level*5)*0.1;
    else if(element == "Kim")
        return (m_level*5) + (m_level*5)*0.2;
    else
        return m_level*5;
}
int HeHoa::m_damageReceived(std::string element)
{
    if(element== "")
}