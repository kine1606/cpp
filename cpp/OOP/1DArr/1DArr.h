#pragma once
class Array1D
{
public:
    Array1D();
    void input();
    void random_generate();
    void output();

    int Smallest_odd();
    int Times_appear();
    bool isDecaying();
    void Sorting();
    ~Array1D();
private:
    int m_n;
    int *m_arr;
};