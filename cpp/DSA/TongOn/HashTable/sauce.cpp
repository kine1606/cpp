#include "HashTableTongOn.h"
#include <string>
#include <iostream>
using namespace std;
int main()
{
    HashTable table(10); // Tạo bảng băm với 10 ô

  // Thêm một số phần tử vào bảng băm
    table.insertWord("Alice", "123");
    table.insertWord("Bob", "456");
    table.insertWord("Charlie", "789");
    // Tìm kiếm giá trị theo khóa
    std::cout<< "finding:" <<'\n';
    string value = table.find("Bob1");    
    std::cout<< "Bob is:" << value <<'\n';

    std::cout<< "print1 " <<'\n';
    table.print();

    // Xóa phần tử theo khóa
    table.deleteWord("Charlie");
    std::cout<< "print2 " <<'\n';
    
    table.print();
    // Hiển thị tất cả các phần tử trong bảng băm
  return 0;
}