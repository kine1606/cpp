#include <vector>
#include <iostream>
#include <algorithm>

std::vector<bool> visited;
std::vector<int> output;
std::vector<int> adj[1001];
void DFS(int u)
{      
    output.push_back(u);
    visited[u] = true;
    for (auto &&i : adj[u])
    {   
        if(!visited[i])
        {
            DFS(i);
        }
    }
}
int main()
{
    int n, m;
    std::cin>> n >> m ;
    visited.resize(n);
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
    DFS(0);
    std::sort(output.begin(), output.end());
    for (auto &&i : output)
    {
        if(i==0) continue;
        std::cout<< i  << " ";
    }
}