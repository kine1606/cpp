/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/
#include <iostream>
#include <climits>
//#include <bits/stdc++.h>
#define MAXN 150000

void NhapMang(int A[], int &N) {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}
void merge_2_Sorted_subArray(int a[MAXN], int left, int middle, int right)
{
    // //10 25 30 40 15 20 50
    // //Mảng b: 10 25 30 40
    // //Mảng c: 15 20 50
    // int b[MAXN], c[MAXN];
    // int ib(0), ic(0);
    // for (size_t i = left; i <middle; i++)
    // {
    //     b[ib++]=a[i];
    // }
    // for (size_t i = middle; i <right; i++)
    // {
    //     c[ic++]=a[i];
    // }
    // for (size_t i = 0; i <ib; i++)
    // {
    //     for (size_t j = i; j <ib; j++)
    //     {
    //         if(b[i]>b[j])
    //         {
    //             int temp=b[i];
    //             b[i]=b[j];
    //             b[j]=temp;
    //         }
    //     } 
    // }

    // for (size_t i = 0; i <ic; i++)
    // {
    //     for (size_t j = i; j <ic; j++)
    //     {
    //         if(c[i]>c[j])
    //         {
    //             int temp=c[i];
    //             c[i]=c[j];
    //             c[j]=temp;
    //         }
    //     } 
    // }
    // for (size_t i = 0; i <right; i++)
    // {
    //     int min=b[ib++];
    //     for (size_t j = middle; j <right; j++)
    //     {
    //         if(min > c[j])
    //         {
    //             min=c[j];
    //         }
    //     }
    //     a[i]=min;
    // }
    for (size_t i = 0; i < right+1; i++)
    {
        int min=a[i];
        int minIndex=i;
        for (size_t j = i+1; j < right+1; j++)
        {
            if(min > a[j])
            {
                min = a[j];
                minIndex=j;
            }
        }
        int temp = a[i];
        a[i]=a[minIndex];
        a[minIndex]=temp;
    }
    
}
void XuatMang(int A[], const int &N) {
    std::cout << N << std::endl;
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}

int main() {
    int a[MAXN], n;

    NhapMang(a, n);

	int l=0, r=n-1, middle =(l+r)/2;
    merge_2_Sorted_subArray(a, l, middle, r);

    XuatMang(a, n);

    return 0;
}
