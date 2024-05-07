/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
#include <iomanip>
#include <cmath>
struct DONTHUC     
{
    double heSo;
    int soMu;
};
struct DATHUC   // da thuc gom nhieu don thuc 
{
    int level;
    DONTHUC polynomial[100];
};
DATHUC* Nhap()
{
    DATHUC *ptr;
    ptr= new DATHUC();
    std::cin>> ptr->level ;
    for (size_t i = 0; i < ptr->level; i++)
    {
        std::cin>> ptr->polynomial[i].heSo;
        std::cin>> ptr->polynomial[i].soMu;
    }
    return ptr;
} 
void Xuat(DATHUC &B)
{
    if( std::cout<< B.polynomial[0].heSo << "x^"<< B.polynomial[0].soMu <<"+" ;
    for (size_t i = 1; i < B.level; i++)
    {
        // if(B.polynomial[i].soMu==0)
        // {
        //     std::cout << B.polynomial[i].heSo;
        //     return;
        // }
        // if(B.polynomial[i].soMu==1)
        // {
        //     std::cout << B.polynomial[i].heSo << "x";
        //     continue;
        // }
        if(!(B.polynomial[i].heSo==0)) 
        {
            if(B.polynomial[i].heSo>0)
            {
            std::cout<< B.polynomial[i].heSo << "x^"<< B.polynomial[i].soMu <<"+" ;
            }
            else
            {
            std::cout<< B.polynomial[i].heSo << "x^"<< B.polynomial[i].soMu <<"-" ;
            }
        }



    }
}
double TinhDaThuc(DATHUC &B, int x)
{
    double sum(0);
    for (size_t i = 0; i <B.level; i++)
    {
        sum+= B.polynomial[i].heSo*pow(x,B.polynomial[i].soMu);
    }
    return sum;
}
int main() {
    DATHUC *B;
    B = Nhap();
    std::cout << "Da thuc vua nhap la: ";
    Xuat(*B);
    double x;
    std::cin >> x;
    std::cout << "\nVoi x=" << x << ", gia tri da thuc la: "
        << std::setprecision(2) << std::fixed << TinhDaThuc(*B, x);
    return 0;
}


