#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("bbbbbbb1",140);
        // std::cout << "test" << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b2("bbbbbbbb2", 0);
        std::cout << b2;
    } 
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}