/* Bây giờ anh ấy muốn tìm giá trị trung bình của tổng 
các chữ số của số A được viết trong tất cả các hệ cơ số từ 
2 đến A-1.
by Kine1606
*/
#include <iostream>
int heCoSo(int number,int i)
{
    int sum(0);
    while(number!=0)
    {
        sum+=number%i;
        number=number/i;
        if(number<i && number!=0)
        {
            sum+=number;
            return sum;
        }
    }
    return sum;
}
int main()
{
    int number;
    std::cin>> number;
    int count(0), sum(0);
    for (size_t i = 2; i < number; i++)
    {
        sum+=heCoSo(number,i);
        count++;
    }
    std::cout << sum << "/" << count;
}