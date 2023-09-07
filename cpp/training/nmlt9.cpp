/*
(1)Kiểm  tra  n  có  phải  là  số chính  phương  hay  không  (số chính  phương  là  số nguyên có căn bậc 2 là một số nguyên, hay nói cách khác, số chính phương là bình phương (lũy thừa bậc 2) của một số nguyên khác).  
(2) Liệt kê tất cả các ước số chẵn của n. 
(3) Liệt kê tất cả các số nguyên tố nhỏ hơn n.
(4) Đếm số lượng chữ số lớn nhất của n. Ví du n=24141, số lớn nhất là 4 số lượng 2  
(5) Thoát khỏi chương trình.
 by Kine1606
 */
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int checksochinhphuong(int &n)
{
    for (size_t a = 1; a < n/2; a++)
    {
    if (sqrt(n)==a)
       return a;
    }
    return 0;
}
int uocsochan (int&n)
{
    cout << " 1 ";
    for (size_t i = 2; i <=n; i+2)
    {
        if (n%i !=0) break;
        if (n%i==0)
        {
          cout << i << " ";
        }
    }
    return 0;
}
int songuyento (int&findNumberIndex)
{
    bool isPrime= true;
    for (int i = 2; i <findNumberIndex; i++)
    {
        if (findNumberIndex%i==0)
        {
            isPrime=false;
            break;
        }
    }
    if (isPrime)
    {
        cout << findNumberIndex << " ";
    }
    return 0;
}
int demsoluong(int& n)
{
    vector <int> arr;
    int a=n/10000;                         // 24141/10000=2
    int b=-(a*10)+(n/1000);                 // -20+24141/1000=4
    int c=n/100- a*100 - b*10;                  //24141/100 -200 - 40 = 1
    int d=n/10 - a*1000 - b*100 - c*10;              
    int e=n- a*10000 -b*1000 - c*100 - d*10;
    int MAX(0);
    
    
      
    return 0;            
}
int main()
{
    int n;
    cout << " enter the positive number <100000 n=";
    cin>> n;
    if (checksochinhphuong(n))
    {
        cout << n << " la so chinh phuong \n";
    }
    else 
    {
    cout << n << " khong la so chinh phuong\n"; 
    } 

    // for (int i = 2; i <= n; i+2)
    // {
    //     if (n%i!=0)
    //     {
    //         cout << " khong co uoc so chan cua n ";
    //         break;
    //     }
        
    //     if (n%i==0)
    //     {
    //         cout << i <<  " ";
    //     }
        
    for (int findNumberIndex = 2; findNumberIndex <n; findNumberIndex++)
    {
        songuyento(findNumberIndex);
    }
    demsoluong(n);
    return 0;
}