#include <vector>
#include <iostream>
using namespace std;
class Matrix {
private:
    vector<vector<int>> matrix;
    int rows, cols;
public:
    Matrix() = default;
    Matrix(int rows, int cols):rows(rows), cols(cols),
        matrix(rows, vector<int>(cols)){}
    friend std::istream& operator>>(std::istream& in, Matrix& x)
    {
        in >> x.rows >> x.cols;     
        for (size_t i = 0; i < x.rows; i++)
        {
            vector<int> temp;
            for (size_t j = 0; j < x.cols; j++) 
            {
                int x;
                in >> x;
                temp.push_back(x);
            }
            x.matrix.push_back(temp);
        }
        return in;
    }
    friend std::ostream& operator<<(std::ostream& out, const Matrix& x)
    {
        for (size_t i = 0; i < x.rows; i++)
        {
            for (size_t j = 0; j < x.cols; j++)
            {
                out << x.matrix[i][j] << " ";
            }
            out << '\n';
        }
        return out;
    }
    
    Matrix operator+(const Matrix& x)
    {
        Matrix temp;
        temp.rows = rows;
        temp.cols = cols;
        for (size_t i = 0; i < rows; i++)
        {
            for (size_t j = 0; j < cols; j++)
            {
                temp.matrix[i][j] = matrix[i][j] + x.matrix[i][j];
            }
        }
        return temp; 
    }
    int operator()(int row, int col)
    {
        if(row >= this->rows || col >= this->cols || row < 0 || col < 0) return -1;
        return matrix[row][col];
    }
};
int main()
{
    Matrix x;
    cin >> x;
    cout << x;
    std::cout <<'\n';
    cout << x(2,2);
}