// nhap ten dien vien JAV =)))
#include <iostream>
#include <string>
#define MAX 100
struct DienVien
{
    std::string name;
    unsigned int yearOfBirth;
    unsigned int chestCircumference;    // so do vong 1 
    unsigned int waistCircumference;   // so do vong 2
    unsigned int hipCircumference;    // so do vong 3
};
int main()
{
    DienVien Jav[MAX];
    int length = sizeof(Jav)/sizeof(Jav[0]);
    for (size_t i = 0; i <length; i++)
    {
        std::cout << "Enter name of actress: ";
        std::getline(std::cin,Jav[i].name, '\n');
        std::cout << "Enter Year of Birth: ";
        std::cin >> Jav[i].yearOfBirth;
        std::cout << "Enter 3 Circumferences: ";
        std::cin >> Jav[i].chestCircumference 
            >> Jav[i].waistCircumference 
            >> Jav[i].hipCircumference;
        std::cin.ignore();
    }
    for (size_t i = 0; i < length; i++)
    {
        std::cout << "Actress " << i+1 << ":\n";
        std::cout << "Name of Actress: " << Jav[i].name << '\n';
        std::cout << "Year of Birth: " << Jav[i].yearOfBirth << '\n';
        std::cout << "Chest Circumference: " << Jav[i].chestCircumference << '\n';
        std::cout << "Waist Circumference: " << Jav[i].waistCircumference << '\n';
        std::cout << "Hip Circumference: " << Jav[i].hipCircumference << "\n";
        std::cout <<"===========================\n";    
    }   
}