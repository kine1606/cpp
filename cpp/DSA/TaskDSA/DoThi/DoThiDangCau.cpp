#include <iostream>
#include <vector>
int main()
{
    int n, m1, m2;
    std::cin>> n >> m ;
    visited.resize(n, false);
    for (size_t i = 0; i < m; i++)    
    {
        int u, v;
        std::cin >> u >> v ;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}