 //Tính S(n) = √1 + √2+√3 + ⋯ √𝑛− 1 + √𝑛  có n dấu căn
 //by Kine1606
 #include <iostream>
 #include <cmath>
 using namespace std;
 double sqrtOfArr(int n, int k)
 {
    if (k>n) return 0;
    return sqrt(k+ sqrtOfArr(n,k+1)); // hmm careful when name the function 
 }
 int main()
 {
    int n(0);
    cout << "enter positive n= ";
    cin >> n;
    int k=1;
    cout <<sqrtOfArr(n,k);
    return 0;
 }
