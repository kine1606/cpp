    // PSI to kg/cm^2

    #include <iostream>
    #include <cmath>
    using namespace std;
    int main()
    {
        int PSI;
        cin >> PSI;
        // 1 PSI == 1pound / inch^2;
        // 1 pound == 0.453592 kg;
        // 1 inch == 2.54cm;
        // => 1PSI == 0.453592kg/ (2.54cm)^2
        cout << PSI* 0.453592/pow(2.52,2) ; 
        return 0;
    }
   
           