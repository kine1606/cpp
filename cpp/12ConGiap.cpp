#include <iostream>
std::string Can(int diaCan)
{
    switch (diaCan)
    {
    case 0: return "Canh";
    case 1: return "Tan";
    case 2: return "Nham";
    case 3: return "Quy";
    case 4: return "Giap";
    case 5: return "At";
    case 6: return "Binh";
    case 7: return "Dinh";
    case 8: return "Mau";
    }
    return "Ky";
}
std::string Chi (int diaChi)
{
    switch (diaChi)
    {
    case 1: return "Dau";
    case 2: return "Tuat";
    case 3: return "Hoi";
    case 4: return "Ti";
    case 5: return "Suu";
    case 6: return "Dan";
    case 7: return "Meo";
    case 8: return "Thin";
    case 9: return "Ty";
    case 10: return "Ngo";
    case 11: return "Mui";
    }
    return "Than";
}
int main()
{ 
    int year;
    do
    {
    std::cout<< "Enter year: ";
    std::cin>> year ; 
    } while (year <=0);
    // tan nham quy giap at binh dinh mau ky canh
    // dau tuat hoi ti suu dan meo thin ty ngo mui than
    // thuy tho moc kim hoa   (even low odd high)
    int thienCan = year%10;
    int diaChi = year%12;
    std::cout << Can(thienCan) << " " << Chi(diaChi) <<'\n';
}