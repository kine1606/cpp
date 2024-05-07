    #include <iostream>
    #include <string>
    #include <vector>
    int Binary_string (const int n, const std::vector<std::string> str,const std::string k, int& count)
    {
        int left(0), right(n-1);
        while(left <= right)
        {
            count++;
            int mid = left + (right - left)/2;
            if(str[mid] < k) left = mid + 1;
            else if(str[mid] > k) right = mid - 1;
            else return mid;
        }
        return -1;
    }
    int main()
    {
        int n;
        std::cin>> n;
        std::cin.ignore();

        std::vector <std::string> str;
        for (size_t i = 0; i < n; i++)
        {
            std::string temp;
            std::cin >> temp;
            str.push_back(temp);
        }
        std::string k;
        int count(0);
        std::cin >> k;
        int check = Binary_string(n, str, k, count); 
        if(check != -1)
        {
            std::cout<< check <<'\n';
            std::cout<< count ;
        }
        else 
        {
            std::cout<< -1 <<'\n';
        }
        return 0;
    }