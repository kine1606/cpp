#include <iostream>
#include <string>
#include <map>
std::map<int, int> dp;
int main()
{
    std::string dp = "VGhlIHBhc3N3b3JkIGZvciB0aGUgNSBkb2xsYXJzIHZpZGVvcyBhcmUgeG1kMDUwNSBhbmQgdGhlIG9uZSBmb3IgdGhlIDEwIGRvbGxhcnMgb25lcyBhcmUgMTAxMHhtZA==";
    int count = 0; 
    for (size_t i = 0; dp[i] != '\0'; i++)
    {
        count++;
    }
    std::cout << count;
}