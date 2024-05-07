// so bai bao duoc cong bo 
// so bai bao duoc trich dan c lan duoc c diem 
// k lon nhat co k bai bao, moi bai co c >=k 
// Ví dụ, một người có 10 bài báo, 
// mỗi bài báo được trích dẫn không dưới 10 lần thì H_Index của người đó ít nhất là bằng 10.
// n bai bao , bai bao thu i la ci, i = 1 

// so bai diem trich dan = so bai bao => 
// 
#include <iostream>
#include <vector>
#include <algorithm>
int H_index(const std::vector <int>& c, const int& n)
{
    if(n <= c.back()) return n;
    int count(0);
    while (count <= n)
    {
        if(count >= c[count])
            return count;
        count++;
    }
    return n;
}
int main()
{
    int n;
    std::cin >> n;
    std::vector <int> c;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        c.push_back(x);
    }
    std::sort(c.begin(), c.end(), std::greater<int>());
    std::cout<< H_index(c, n);
}