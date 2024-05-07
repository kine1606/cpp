#include <iostream>
#include <string>
int main()
{
    std::string input;
    std::getline(std::cin, input);
    int length= sizeof(input);
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (isalpha(input[i]))
        {
            if (islower(input[i]))
                input[i] = toupper(input[i]);
            else
                input[i] = tolower(input[i]);
        }
    }
    std::cout << input;
}