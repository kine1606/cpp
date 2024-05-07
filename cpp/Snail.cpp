#include <iostream>
#define MAX 100
void SnailMatrix(int number)
{
    int a[MAX][MAX];
    int count(1);
    int HighRow(0), LeftColumn(0), RightColumn = number-1, LowRow = number-1;
    while (HighRow <= LowRow && LeftColumn <= RightColumn)
    {
        for (size_t i = LeftColumn; i <=RightColumn; i++)
        {
            a[HighRow][i]=count++;
            std::cout << a[HighRow][i] << " ";
        }
        std::cout << '\n';
        HighRow+=1;
        for (size_t i = HighRow; i <= LowRow; i++)
        {
            a[i][RightColumn]=count++;
            std::cout << a[i][RightColumn] << " ";
        }
        std::cout << '\n';
        RightColumn-=1;
        for (size_t i = RightColumn; i >= LeftColumn; i--)
        {
            a[LowRow][i]=count++;
            std::cout << a[LowRow][i] << " ";
        }
        std::cout << '\n';
        LowRow-=1;
        for (size_t i = LowRow; i >= HighRow; i--)
        {
            a[i][LeftColumn]=count++;
            std::cout << a[i][LeftColumn] << " ";

        }
        std::cout << '\n';
        LeftColumn+=1;
    }
    
}
int main()
{
    int number;
    std::cin >> number;
    SnailMatrix(number);
    return 0;
}