#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello World!"
        << std::endl << std::endl
        << "Press [Enter] to exit."
        << std::endl;

    std::string dummy;
    std::getline(std::cin, dummy);

    return 0;
}
