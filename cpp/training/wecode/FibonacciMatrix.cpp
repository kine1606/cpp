// phan tu dong i cot j la so Fiboancci thu i+j+1
// chi so  1 2 3 4 5 6 7  8  .....
// gia tri 1 1 2 3 5 8 13 21 .....
int Fibonacci (int chiSo)
{
    if (chiSo==1 || chiSo==2) return 1;
    return Fibonacci(chiSo-1)+Fibonacci(chiSo-2) ;
}
#include <iostream>
#define MAX 1000
int main()
{
    int a[MAX];
    int n;
    do
    {
    std::cin >> n;
    } while (n<2 || n>16);
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            int chiSo=i+j+1;
            std::cout << Fibonacci(chiSo) << "  ";
        }
        std::cout << '\n' << '\n';
    }
    
}