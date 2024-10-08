#include <iostream>
#include <vector>
#include <map>
void DFS(int u, std::vector<bool>& visited, std::vector<int> adj[1001], std::vector<int>& order)
{
    visited[u] = true;
    for (auto &&i : adj[u])
    {
        if(!visited[i])
        {
            order.push_back(i);
            DFS(i, visited, adj, order);
        }
    }
    
}
bool DangCau(std::vector<int> adj1[1001], std::vector<int> adj2[1001], int n)
{
    std::vector<bool> visited1(n, false);
    std::vector<bool> visited2(n, false);
    std::vector<int> order1, order2;
    for (size_t i = 0; i < n; i++)
    {
        DFS(i, visited1, adj1, order1);
        DFS(i, visited2, adj2, order2);
    }
    if(order1 != order2) return false;
    std::vector<int> mapping(n);
    for (int i = 0; i < n; ++i) 
    {
        mapping[order2[i]] = order1[i];
    }
    std::cout << "Song anh: " << '\n';
    for (int i = 0; i < n; ++i) 
    {
        std::cout << i << " -> " << mapping[i] << '\n';
    }
    return true;
}
int main()
{
    int n, m1, m2;
    std::vector<int> adj1[1001];
    std::vector<int> adj2[1001];
    std::cin>> n >> m1 >> m2 ;
    for (size_t i = 0; i < m1; i++)
    {
        int u, v;
        std::cin>> u >> v ;
        adj1[u].push_back(v);
        adj1[v].push_back(u);
    }
    for (size_t i = 0; i < m2; i++)
    {
        int u, v;
        std::cin>> u >> v ;
        adj2[u].push_back(v);
        adj2[v].push_back(u);
    }
    if(DangCau(adj1, adj2, n))
    {
        std::cout<< "Hai do thi dang cau" <<'\n';
    }
    else std::cout<< "Hai do thi khong dang cau" <<'\n';
}
