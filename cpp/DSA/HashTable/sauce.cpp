#include "HashTable.h"
#include <string>
#include <iostream>
using namespace std;
int main()
{
    HashTable table(10); // Tạo bảng băm với 10 ô

  // Thêm một số phần tử vào bảng băm
  table.insert("Alice", "123");
  table.insert("Bob", "456");
  table.insert("Charlie", "789");

  // Tìm kiếm giá trị theo khóa
  string value = table.find("Bob");
  std::cout << "Giá trị của khóa \"Bob\": " << value << '\n';

  // Xóa phần tử theo khóa
  table.erase("Charlie");

  // Hiển thị tất cả các phần tử trong bảng băm
  table.print();

  return 0;
}