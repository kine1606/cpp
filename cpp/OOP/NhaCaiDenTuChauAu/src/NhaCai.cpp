#include "../inc/NhaCai.h"
#include <iostream>
NhaCai::NhaCai()
{
    m_type = 1;
}
NhaCai::NhaCai(int ID, int type) : BinaryOptionObject(ID, type){}
void NhaCai::input()
{
    // BinaryOptionObject::input();
    std::cin>> m_soDu;
    // std::cin.ignore();
    std::cout<< "NhaCai::output(): " ;
    NhaCai::output();
}
void NhaCai::calc(int x, int tienCuoc)
{
    if(x == 0)
        m_xemXet[false] += tienCuoc;
    else if(x==1)
        m_xemXet[true] += tienCuoc;
}
void NhaCai::output()
{
    BinaryOptionObject::output();
    std::cout<< m_soDu <<'\n';
}
void NhaCai::tinhSoDu()
{
    
}
void NhaCai::ThaoTungKetQua()
{
    if(m_xemXet[true] > m_xemXet[false])
        m_UpOrDown = false;
    else m_UpOrDown = true;
}
NhaCai::~NhaCai(){}