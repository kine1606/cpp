#include <vector>
#include <iostream>
std::vector<int> adj[1001];
void DFS(int u, std::vector<bool>& visited)
{
    visited[u] = true;
    for (auto &&i : adj[u])
    {
        if(!visited[i])
        {
            DFS(i, visited);
        }
    }
}
int main()
{
    int n, m;
    std::cin>> n >> m;
    std::vector <bool> visited(n,false);

    for (size_t i = 0; i < m; i++)
    {
        int u, v;
        std::cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    DFS(0, visited);
    for (size_t i = 1; i < n; i++)
    {
        if(visited[i]) std::cout<< "CO" <<'\n';
        else std::cout<< "KHONG" <<'\n';
    }
    
    
}