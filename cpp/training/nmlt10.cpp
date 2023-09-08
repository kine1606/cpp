/**********************************************************************************
(1) Xuất mảng vừa nhâp. (2)  Liệt  kê  và  tính  tổng  tất  cả  số  hoàn  thiên  có  trong  mảng  
(số  hoàn  thiện  là một số nguyên dương mà tổng các ước nguyên dương của nó bằng chính nó, ví dụ: 6,28,...) 
(3) Liệt kê tất cả các vị trí mà tại đó chứa giá trị lớn nhất trong mảng. Ví dụ: Mảng a [5] ={5,2, 1,5,1} Kết quả vị trí: 0,3 
(4) Sắp xếp mảng theo chiều giảm dần. 
(5) Thoát khỏi chương trình.
by Kine1606 
***********************************************************************************/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int sohoanhao (vector <int> arrayNumber)
{
    int sumAllPerfectNumber(0);
    for (size_t i = 0; i < size(arrayNumber); i++)
    {
       int sum(0);
             for (int j = 1; j < arrayNumber[i]; j++)
             {
                  if (arrayNumber[i]%j==0)
                 {
                      sum+=j;
                 }
             }
              if (sum==arrayNumber[i])
                 {
                    sumAllPerfectNumber+=arrayNumber[i];
                 }
    }
    return sumAllPerfectNumber;
}
int listLargestNum (vector <int> arrayNumber)
{
      int MAX(0);
      for (size_t i = 0; i < size(arrayNumber); i++)
      {
        if (arrayNumber[i]>MAX)
        {
            MAX=arrayNumber[i];
        }
      }

      for (int i = 0; i < size(arrayNumber); i++)
      {
        if (MAX==arrayNumber[i])
        {
            cout << i << " ";
        }
        
      }
      return 0;
}
int sapxep (vector<int> arrayNumber)
{
    int n= sizeof(arrayNumber)/sizeof(arrayNumber[1]);
    sort(arrayNumber.begin(),arrayNumber.end());
    for( int  &x : arrayNumber)
    {
        cout << x << " ";
    }
return 0;
}
int main()
{
    vector<int> arrNumber;
    int n(1);
    cout << " enter the number array ( exit enter 0 ): ";
    while (n)
    {
        cin>>n;
        arrNumber.push_back(n);
    }
    for (size_t i = 0; i < size(arrNumber); i++)
    {
        cout << arrNumber[i]<< " ";
    }
    // done quest(1)

    cout << '\n';
    cout << "sum all Perfect Number is equal to=";
    cout <<sohoanhao(arrNumber) ; // done quest(4)

    cout << '\n';
    cout << "largest number appear at :";
    listLargestNum(arrNumber);   // done quest(3)
    
    cout << '\n';
    cout << "the array after sorting is :";
    sapxep(arrNumber);  // done quest (4)
}