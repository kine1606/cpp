#include "ThietBi.h"
#include "ThietBiGD.h"
#include "ThietBiGDDT.h"
#include "ThietBiGDCS.h"
int main()
{
    ThietBi* ptr[6];
    ptr[0] = new ThietBiGDDT();
    ptr[2] = new ThietBiGDCS();
    ptr[1] = new ThietBiGDDT();
    ptr[3] = new ThietBiGDDT();
    ptr[4] = new ThietBiGD();
    for (size_t i = 0; i < 5; i++)
    {
        ptr[i]->input();
    }
    for (size_t i = 0; i < 5; i++)
    {
        ptr[i]->output();
    }
    
}