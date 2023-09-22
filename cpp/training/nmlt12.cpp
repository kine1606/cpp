 //Hãy viết các lệnh trong hàm “TongDuongCheo” để tính tổng các phần tử
 //trên đường chéo chính của ma trận vuông a có số dòng bằng số cột (sodong):
 // by Kine1606
 #include <iostream>
 #define MAX 1000
 using namespace std;
 int TongDuongCheo (int array[MAX][MAX], int column)
 {
     double S;
     for (int i = 0; i < column; i++)
     {
         S+= array[i][i];
     }
     return S;
 }
 int main()
 {
     int array[MAX][MAX];
     cout << "enter column:";
     int column;
     cin >> column;
     for (int i = 0; i <column; i++)
     {
         for (int j = 0; j < column; j++)
         {
         cin>> array[i][j];
         }
         
     }
     cout << "tong duong cheo " << TongDuongCheo(array,column);
     return 0;
 }