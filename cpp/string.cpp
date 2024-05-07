#include <iostream>
#include <string>
int main()
{
    std::string name1, name2;
    std::getline(std::cin, name1);
    std::getline(std::cin, name2);
    std::cout << name1 << '\n';
    std::cout << name1.compare(name2) << '\n';
    std::cout << name1.erase(5,6) << '\n';
    // std::cout << name1.swap(name2) << '\n';
    std::cout << name1.insert(7,name2);
    return 0;
}