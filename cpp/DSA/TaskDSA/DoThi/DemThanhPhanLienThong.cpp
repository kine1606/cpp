#include <vector>
#include <iostream>
std::vector<int> adj[1001];
std::vector<bool> visited;
int n, m;
void DFS(int u)
{
    visited[u] = true;
    for (auto &&i : adj[u])
    {
        if(!visited[i])
        {
            DFS(i);
        }
    }
}
int DemThanhPhanLienThong()
{
    int count = 0;
    for (size_t i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            count++;
            DFS(i);
        }
    }
    return count;
}
int main()
{
    std::cin>> n >> m ;
    visited.resize(n, false);
    for (size_t i = 0; i < m; i++)    
    {
        int u, v;
        std::cin >> u >> v ;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    std::cout<< DemThanhPhanLienThong() <<'\n';
}