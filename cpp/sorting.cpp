#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int array[6] = {2,3,4,6,8,9};
    sort(array, array + size(array));
    // loại số thứ mấy và tìm ra ước chung lớn nhất của mảng , ước chung số lớn nhất hiện tại là bao nhiêu ? 
    // i think that we needa sort first and try to find the second 
    int count(0);
    for (int i = size(array)-1; i >= size(array)/2; i--)
    {
        for (int j = 0; j< size(array)/2;j++)
        {
            if (array[i] % array[j]==0)
            {
                count=array[j];
            }
            if (array[i] % array[j]!=0)
            {
            cout << j+1 << " " << count;
            return 0;
            }
        }
    }
}