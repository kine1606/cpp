/* Giả định công ty NaViGame đang duy trì một hệ thống server rất lớn đáp ứng cho hàng chục triệu 
acccount của các game thủ. Hệ thông server này duy trì một danh sách các game thủ đang online 
cho phép nhà quản trị có thể kiểm tra xem một game thủ bất kỳ nào đó có đang online hay không. 
Hãy giúp công ty NaViGame xây dựng module kiểm tra game thủ online này.

INPUT
Mỗi dòng của input chứa hai con số a và b. 
1: online
2: check  -> if online trả 1 else trả 0
3: offline 
Ví dụ như:
Dòng: 1 565481 cho biết game thủ với mã số 465481 vừa mới đăng nhập vào hệ thống
Dòng: 2 87126 cho biết người quản trị muốn kiểm tra xem game thủ với mã số 87126 có đang online trong hệ 
thống hay không.
Dòng: 3 48769 cho biết là game thủ có mã số 48769 vừa đăng xuất khỏi hệ thống.
Input sẽ kết thúc bằng dòng chỉ chứa một số 0.

OUTPUT
Ứng với mỗi yêu cầu kiểm tra của nhà quản trị xuất ra trên một dòng giá trị 0 nếu game thủ đó không online. 
Nếu game thủ đang online, xuất ra 1
*/
#include <iostream>
#include <map>
#include <vector>
int main()
{
    std::map<int, std::pair<int, bool>> myMap;
    std::vector <int> myVector;
    int index(0);
    while(true)
    {
        int x, y;
        std::cin>> x;
        if(x==0) break;
        std::cin>> y ;
        if(x==1) myMap[y] = std::make_pair(index++, true);
        else
        {
            if(myMap[y].second == false) myVector.push_back(0);
            else if(myMap[y].second == true) myVector.push_back(myMap[y].first);
        }
    }
    for (auto &&i : myVector)
    {
        std::cout<< i <<'\n';
    }
}