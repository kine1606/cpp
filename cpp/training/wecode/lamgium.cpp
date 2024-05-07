    #include<iostream>
    using namespace std;
    void nhap(int a[], int &n){
        do
        {
            std::cin>>n;
        }while(n<2||n>99);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
    }
    void sole(int a[], int n)
    {
        for (int i = 1; i < n; i+=2)
            cout << a[i] << " ";
    }
    int main()  {
        int a[100];
        int n;
        nhap(a,n);
        sole(a,n);
        return 0;
    }
