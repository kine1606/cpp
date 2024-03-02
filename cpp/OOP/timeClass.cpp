#include <iostream>
class timing
{
    private:
        unsigned hour, minute, second;
    public:
        timing()
        {
            do
            {
                std::cout<< "Enter time: ";
                std::cin>> hour >> minute >> second;
            } while (hour > 24 || minute > 60 || second > 60);
        };
        timing(int a, int b, int c)
        {
            hour = a;
            minute = b;
            second = c;
        }
        void now()
        {
            std::cout<< "Your time is: ";
            if(hour<10)
                std::cout<< 0 << hour << ":";
            else 
                std::cout<< hour << ":" ;
            if(minute<10)
                std::cout<< 0 << minute << ":";
            else 
                std::cout<< minute << ":" ;
            if(second<10)
                std::cout<< 0 << second;
            else 
                std::cout<< second;
            std::cout <<'\n';
        }
        void calc()
        {
            std::cout<< "Need: ";
            std::cout<< 24-hour <<":" << 60 - minute <<":" << 60- second;
            std::cout<< " more to 00:00:00" <<'\n';
        }
};
// tinh cho den 00:00:00
int main()
{
    timing tiktak;
    tiktak.now();
    tiktak.calc();
    timing tiktok(5, 6, 7);
    tiktok.calc();
}