#include <iostream>
#include <vector>
#include <queue>


bool DangCau(std::vector<std::vector<int>> adj1, std::vector<std::vector<int>> adj2, int n) 
{
    std::vector<bool> visited1(n, false);
    std::vector<bool> visited2(n, false);
    std::vector<int> order1, order2;

    for (int i = 0; i < n; i++) 
    {
        if (!visited1[i]) 
        {
            std::queue<int> q;
            q.push(i);
            visited1[i] = true;

            while (!q.empty()) 
            {
                int u = q.front();
                q.pop();
                order1.push_back(u);
                for (int v : adj1[u]) 
                {
                    if (!visited1[v]) 
                    {
                        q.push(v);
                        visited1[v] = true;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) 
    {
        if (!visited2[i]) 
        {
            std::queue<int> q;
            q.push(i);
            visited2[i] = true;
            while (!q.empty()) 
            {
                int u = q.front();
                q.pop();
                order2.push_back(u);
                for (int v : adj2[u]) 
                {
                    if (!visited2[v]) 
                    {
                        q.push(v);
                        visited2[v] = true;
                    }
                }
            }
        }
    }
    if (order1 != order2)   return false;
    std::vector<int> mapping(n);
    for (int i = 0; i < n; ++i) 
    {
        mapping[order2[i]] = order1[i];
    }
    std::cout << "Song ánh: " << '\n';
    for (int i = 0; i < n; ++i) 
    {
        std::cout << i << " -> " << mapping[i] << '\n';
    }
    return true;
}

int main() 
{
    int n, m1, m2;
    std::cin >> n >> m1 >> m2; // n: số đỉnh, m1: số cạnh của G1, m2: số cạnh của G2

    std::vector<std::vector<int>> adj1(n), adj2(n);
    for (int i = 0; i < m1; ++i) 
    {
        int u, v;
        std::cin >> u >> v;
        adj1[u].push_back(v);
        adj1[v].push_back(u);
    }

    for (int i = 0; i < m2; ++i) 
    {
        int u, v;
        std::cin >> u >> v;
        adj2[u].push_back(v);
        adj2[v].push_back(u);
    }
    if (DangCau(adj1, adj2, n)) 
        std::cout << "Hai do thi dang cau" << '\n';
    else 
        std::cout << "Hai do thi khong dang cau" << '\n';
    return 0;
}