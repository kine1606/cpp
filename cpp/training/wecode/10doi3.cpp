    #include <iostream>
    int main()
    { 
        int bottles, reuse;
        std::cin>> bottles >> reuse ;
        int recycle=bottles;
        int sum(0);
        while (recycle>reuse)
        {
            sum+=bottles; // SUM=5;
            // bottle =2;
            // rec= 3;
            // sum = 5+1;
            // sum= 8;
            // bot = 1;
            // rec = 2;
            // 
            bottles = recycle/reuse;
            //15 dc 15 vo chai // 15 vo chai doi dc 3 chai + 3 cai vo 
            recycle = recycle/reuse + recycle%reuse;
            sum+= recycle/reuse;
        }
        std::cout << sum;
    }
