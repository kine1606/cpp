/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
#define MAXN 100000

void NhapMang(int A[], int &N) {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}
void hoanvi(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;
}
void selection_sort_decending(int *a, int n)
{
    if(n==0) return;
    for (size_t i = 0; i <n-1; i++)
    {
        int indexSwap=i;
        for (size_t j= i+1; j <=n-1; j++)
        {
            if(a[indexSwap] < a[j])
            {
                indexSwap=j;
            }
        }
        hoanvi(a[i],a[indexSwap]);
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

    selection_sort_decending(a, n);

    XuatMang(a, n);

    return 0;
}
