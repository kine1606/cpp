/*************************************************************************************
a) Kiểm tra xem mảng có toàn số dương hay không ?
b) Nếu trong mảng có phần tử có giá trị là số nguyên âm thì in ra giá trị số nguyên âm lớn
nhất. Nếu trong mảng không có phần tử có giá trị là số nguyên âm thì in ra cho biết
‘Mang khong co so nguyen am’.
c) Xóa tất cả các phần tử có giá trị nhỏ hơn giá trị của x. Giá trị x được nhập từ bàn phím.    
d) Hãy hoàn thiện hàm main trên bằng cách viết các dòng lệnh để gọi các hàm trong câu
a,b và c.
by Kine1606
************************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAX=50;
void NhapMang(int a[], int &n)
{
    do{
        cout<<"Nhap so nguyen n=";
        cin>>n;
    }while(n<1 || n>MAX);

    for(int i=0; i<n; i++)
     {
        cout<<"Nhap a["<<i<<"]= ";
        cin>>a[i];
     }
}
bool positiveNumber(int a[], int& n)
{
    for (int i = 0; i <n; i++)
    {
        if (a[i]<0)
        {
            return 0;
        }
        
    }
    return 1;
}
int negativeNumber(int a[], int& n, vector<int> arrayOfNegativeNumber)
{
    if (positiveNumber(a,n))
    {
        cout << "Mang khong co so nguyen am\n";
        return 0;
    }
    else
    {
        for (int i = 0; i <n; i++)
        {
            if (a[i]<0)
            {
                arrayOfNegativeNumber.push_back(a[i]);
            }
        }
    } 
    sort(arrayOfNegativeNumber.begin(), arrayOfNegativeNumber.end());
    cout << "the largest negative is" << arrayOfNegativeNumber[0] << '\n';
    return 0;
}
// hmm done but the place of array is not ok @@
double deleteNumber (int a[], int& n )
{   
    int x;
    cout << "enter x=";
    cin >> x;
    sort(a, a+n, greater<int>());
    for (int i = 0; i <n; i++)
    {
        if (a[i] > x)
        {   
        cout << a[i] << " ";
        }
        else break;
    }
    return 0;
}

int main()
{
    int array[MAX];
    vector <int> arrayOfNegativeNumber;
    int n;
    NhapMang(array , n);
    (positiveNumber(array,n))? cout<< "mang la mang so duong\n" : cout <<"mang khong la mang so duong\n";
    negativeNumber(array , n , arrayOfNegativeNumber);
    deleteNumber(array, n);
    return 0;
}   