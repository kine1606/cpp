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
    int count(0);
    if(m == 0) 
    {
        std::cout<< n <<'\n';
        return 0;
    }
    for (size_t i = 0; i < n; i++)
    {
        if(adj[i].size() == 0)
            count++;
    }

    std::cout<< count <<'\n';
}