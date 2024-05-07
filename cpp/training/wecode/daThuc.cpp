
#include <iostream>

#define MAXN 100
struct DONTHUC
{
    double heSo;
    int soMu;
};
struct DATHUC{
    int n;
    DONTHUC ptr[MAXN];
};
void Nhap(DATHUC &a)
{
    std::cin>> a.n ;
    for (size_t i = 0; i <=a.n; i++)
    {
        std::cin>> a.ptr[i].heSo >> a.ptr[i].soMu;
    }
}
DATHUC* Nhap()
{   
    DATHUC *polynomial= new DATHUC;
    std::cin>>  polynomial->n ;
    for (size_t i = 0; i <=polynomial->n; i++)
    {
        std::cin>> polynomial->ptr[i].heSo >> polynomial->ptr[i].soMu ;
    }
    return polynomial;
}
void Xuat(DATHUC *a)
{
    for (size_t i = 0; i < a->n; i++)
    {
        if(a->ptr[i].heSo > 0)
        {
            std::cout<< a->ptr[i].heSo << "x^" << a->ptr[i].soMu << " + ";
        }
    }
    std::cout<< a->ptr[a->n].heSo << "x^" << a->ptr[a->n].soMu;
    std::cout <<'\n';
}

int main() {
    DATHUC a, *b, c;
    Nhap(a);  
    b=Nhap(); 
    Xuat(&a);
    Xuat(b); 
    c=Cong(a, *b);
    Xuat(&c); 
    return 0;

}
