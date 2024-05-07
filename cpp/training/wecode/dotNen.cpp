#include <iostream> 
int candles(int candle, int recycle, int reuse)
{
    if(recycle<=1) return 0;
    return candle+ recycle/reuse+candles(candle, candle%reuse + candle/reuse, reuse);
}
int main()
{ 
    int candle, reuse;
    std::cin>> candle >> reuse;
    int recycle=candle;
    // std::cout<<candles(candle,recycle,reuse);
    int sum=0;
    while (recycle>=1)
    {
        sum+=candle;
        candle = recycle/reuse;
        recycle = candle + recycle%reuse;
    }
    std::cout << sum;
}