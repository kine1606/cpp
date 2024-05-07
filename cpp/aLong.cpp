#include <iostream>
#include <ctime>
using namespace std;
class MaTran
{
private:
    int dong, cot;
    int **data;
public:
    MaTran();
    MaTran(int m=0,int n=0);
    ~MaTran();
    void taoNgauNhien();
    void nhap();
    void xuat()const;
    MaTran operator + (const MaTran&p) const;
    MaTran operator * (const MaTran&p)const;

};
MaTran::MaTran() = default;
MaTran::MaTran(int m, int n){
    dong = m;
    cot = n;
    data = new int* [dong];
    for (int i = 0; i < dong; ++i) {
        data[i] = new int[cot];
    }
}

MaTran::~MaTran() {
    for (int i = 0; i < dong; ++i) {
        delete[] data[i];
    }
    delete[] data;
}
void MaTran::taoNgauNhien()
{
    srand(time(0));
    for (int i = 0; i < dong; ++i) {
        for (int j = 0; j < cot; ++j) {
            data[i][j] = rand() % 10;
        }
    }
}
void MaTran::nhap()
{
    cout<<"Nhap cac phan tu: "<<endl;
    for (int i = 0; i < dong; ++i) {
        for (int j = 0; j < cot; ++j) {
            cin >> data[i][j];
        }
    }
}
void MaTran::xuat()const
{
     for (int i = 0; i < dong; ++i) {
        for (int j = 0; j < cot; ++j) {
            cout << data[i][j]<<" ";
        }
        cout<<endl;
    }
}
MaTran MaTran::operator+(const MaTran&p)const
{
    MaTran tong(dong,cot);
    for (int i = 0; i < dong; ++i) 
    {
        for (int j = 0; j < cot; ++j) 
        {
            tong.data[i][j] = data[i][j] + p.data[i][j];
        }
    }
    return tong;

}
MaTran MaTran::operator *(const MaTran&p)const
{
    MaTran tich(dong, p.cot);
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<p.cot;j++)
        {
            for(int k=0;k<cot;k++)
            {
                tich.data[i][j]=data[i][k]*p.data[k][j];
            }
        }
    }
    return tich;
}
int main()
{
    int m, n, m1, n1;

    cout<<"Moi nhap so dong va cot cua ma tran A: ";
    cin>>m>>n;
    MaTran a(m,n);
    a.nhap();
    a.xuat();
    // cout<<endl;

    cout<<"Moi nhap so dong va cot cua ma tran B: ";
    cin >>m1 >> n1;
    MaTran b(m1,n1);    
    b.nhap();
    cout<<endl;
    MaTran tong = a + b;
    MaTran tich = a*b;
    cout<<"Tong cua hai ma tran: "<<endl;
    tong.xuat();
    cout<<endl;
    cout<<"Tich cua hai ma tran: "<<endl;
    tich.xuat();
    return 0;
}