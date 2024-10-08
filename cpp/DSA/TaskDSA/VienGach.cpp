#include <vector>
#include <iostream>
#include <algorithm>
int main()
{
    std::vector<std::vector<int>> luuTru;
    std::vector<int> output;
    int n, m;
    std::cin>> n >> m ;
    for (size_t i = 0; i < n; i++)
    {
        std::vector<int> temp;
        for (size_t j = 0; j < m; j++)
        {
            int x;
            std::cin>> x ;
            temp.push_back(x);
            output.push_back(x);
        }
        luuTru.push_back(temp);
    }
    std::sort(output.begin(), output.end());
    for (auto &&i : output)
    {
        std::cout<< i << " ";
    }

}
// int countOneChild(Node* current)
// {
//     if(current == nullptr) return -1;
//     if(current->Left == nullptr && current->Right !=nullptr || current->Left != nullptr && current->Right == nullptr)
//         return 1;
//     return countOneChild(current->Left) + countOneChild(current->Right);
// }
// std::vector<int> adj[1001];