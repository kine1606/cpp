/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/
#include <iostream>
struct Point{
    char name[20];
    int a, b;
};
void Nhap(Point *&A)
{
    A= new Point();
    std::cin.getline(A->name, 20);
    for (size_t i = 0; A->name[i] !='\0'; i++)
    {
        A->name[i]= toupper(A->name[i]);
    }
    std::cin >> A->a >> A->b;
    std::cin.ignore();
}
void Xuat_InHoa_TenDiem(Point *A)
{
    std::cout << A->name << "(" << A->a << ", " << A->b << ")";
}
int main() {
    Point *A;
    Nhap(A);
    Xuat_InHoa_TenDiem(A);
    return 0;
}
