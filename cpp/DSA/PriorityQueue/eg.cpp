#include <iostream>
#include <queue>
#include <vector>
int main()
{
    int n;
    std::cin>> n ;
        std::priority_queue<int,std::vector<int>> myPQ;
    while(n--)
    {
        int x;
        std::cin>> x ;
        myPQ.push(x);
    }
    int sum(0);
    while(myPQ.size() >= 2)
    {
        int x = myPQ.top();
        myPQ.pop();
        int y = myPQ.top();
        myPQ.pop();
        sum += x+y;
        myPQ.push(x+y);
    }
    std::cout<< sum <<'\n';
}