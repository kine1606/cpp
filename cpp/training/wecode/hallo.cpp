/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>

long TinhTong_1(int a){

    int S(0);
    while (a!=0)
    {
        S+=a;
        a--;
    }
    return S;
}

int main(){
    int n;
    std::cin >> n;
    
    std::cout << TinhTong_1(n);

    return 0;
}
