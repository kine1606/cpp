#include <iostream>
int main()
{
    int *ptr1 = new int[3];
    for (size_t i = 0; i < 3; i++)
    {
        ptr1[i] = i;
    }
    int *ptr2 = new int[3];
    
    for (size_t i = 0; i < 3; i++)
    {
        ptr2[i] = ptr1[i];
    }
    delete ptr1;
    for (size_t i = 0; i < 3; i++)
    {
        std::cout<< "ptr2[" << i<<"]=" << ptr2[i] <<'\n';
    }
    
}