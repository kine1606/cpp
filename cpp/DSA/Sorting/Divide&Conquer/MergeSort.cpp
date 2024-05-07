#include <iostream>
const int MAXN = 1 + 1e5;
void input(int arr[MAXN], int &n)
{
    std::cin >> n;
    for(size_t i = 0; i < n ; i++)
    {
        std::cin >> arr[i];
    }
}
void output(int arr[MAXN], int left, int right, int n)
{
    for (size_t i = 0; i < left; i++)
    {
        std::cout<< arr[i] << " ";
    }
    
    for (size_t i = left; i < right; i++)
    {
        if(i==left)
        {
            std::cout<< "[" << arr[left] << " ";
        }
        if(i==right-1)
        {
            std::cout<< arr[right] << " ]" <<'\n';
        }
        std::cout<< arr[i] << " " ;
    }
    for (size_t i = right; i <n; i++)
    {
        std::cout<< arr[i] << " ";
    }
    std::cout <<'\n';
}
void merge(int array[], int const left, int const mid,
           int const right)
{
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;
 
    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
 
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
 
    auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;
 
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne
           && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne]
            <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray]
                = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray]
                = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
 
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray]
            = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
 
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray]
            = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    output(array,left, right, n);
    delete[] leftArray;
    delete[] rightArray;
}
void MergeSort(int arr[MAXN], int left, int right)
{
    if(left >= right) return;
    int mid= (left+right)/2;
    MergeSort(arr, left , mid);
    MergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
}
int main()
{
    int n, arr[MAXN];
    input(arr, n);
    std::cout<< "Before sort: ";
    for (size_t i = 0; i < n; i++)
    {
        std::cout<< arr[i] << " " ;
    }
    
    MergeSort(arr, 0, n-1); 
    std::cout<< "\nAfter sort:";
    for (size_t i = 0; i < n; i++)
    {
        std::cout<< arr[i] << " " ;
    }
}