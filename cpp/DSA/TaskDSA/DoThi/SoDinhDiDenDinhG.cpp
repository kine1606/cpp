#include <vector>
#include <iostream>
int main()
{
    int n, m;
    std::cin>> n >> m ;
    std::vector<std::vector<int>> adj;
    adj.resize(n);
    for (size_t i = 0; i < m; i++)    
    {
        int u, v;
        std::cin >> u >> v ;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(m == 0) 
    {
        std::cout<< "KHONG" <<'\n';
        return 0;
    }
    for (auto &&i : adj[0])
    {
        std::cout<< i  << " ";
    }
}