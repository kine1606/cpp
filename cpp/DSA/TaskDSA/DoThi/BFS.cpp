#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
std::vector<bool> visited;
std::vector<int> output;
std::vector<int> adj[1001];
std::queue<int> myQueue;
// void BFS(int u)
// {      
//     output.push_back(u);
//     visited[u] = true;
//     for (auto &&i : adj[u])
//     {   
//         if(!visited[i])
//         {
//             BFS(i);
//         }
//     }
// }
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
    myQueue.push(0);
    while(!myQueue.empty())
    {
        int current = myQueue.front();
        myQueue.pop();
        for (auto &&i : adj[current])
        {
            if(!visited[i])
            {
                myQueue.push(i);    
                visited[i] = true;
            }
        }
        std::cout<< current << " ";
    }
    std::sort(output.begin(), output.end());
    for (auto &&i : output)
    {
        if(i==0) continue;
        std::cout<< i  << " ";
    }
}