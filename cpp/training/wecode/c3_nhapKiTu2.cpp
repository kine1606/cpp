    #include <iostream>
    #include <iomanip>
    #include <string>
    using namespace std;
    #define MAX 1000
    int main()
    {
        string name;
        getline(cin, name);

        char sex[MAX];
        cin>> sex;
        cin.ignore();

        int yearOfBirth;
        cin >> yearOfBirth;
        cin.ignore();   

        string className;
        getline(cin,className);
        

        double mathPoint;
        cin >> mathPoint;
        
        int ITPoint;    
        cin >> ITPoint;

        double averagePoint= (mathPoint+ITPoint)/2.0;
        
        cout << name << '\n';
        cout << sex[0]<< '\n';
        cout << yearOfBirth << '\n';
        cout << className << '\n';
        cout << mathPoint << '\n';
        cout << ITPoint << '\n';
        cout << averagePoint << '\n';
        return 0;
    }
