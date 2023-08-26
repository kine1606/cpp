// số nguyên đầu tiên là bội của 5 và lớn hơn N.
//Xem nội dung đầy đủ tại: https://123docz.net/document/3504891-de-thi-nhap-mon-lap-trinh-c-co-giai-chi-tiet.htm
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int N;
  cout << " nhap so nguyen N=";
   do
   {
    cin >> N;
   } while (N<1 || N>100000);
   unsigned int count=0;
   for (size_t i = N; count < 50; i++)
   {
    if (i%5==0)
    {
        cout << count++<< "  " << i << '\n';
    }
   }
   return 0;
}
// {
//    int N;
//    cout << " nhap so nguyen N=";
//    do
//    {
//     cin >> N;
//    } while (N<1 || N>100000);

//    vector<int> resultList;
//    for (size_t i = N; resultList.size() < 50 ; i++)
//    {
//         if(i%5==0)
//         {
//             resultList.push_back(i);
//         }
//    }
//    unsigned int count = 0;
//    for (auto &i : resultList)
//    {
//         cout<<++count<<" "<<i<<"\n";
//    }
// }
