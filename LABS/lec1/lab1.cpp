#include <iostream>
#include <string>

int main()
{
    int a , b;
    char op ;
    std::cout << "Enter Numbers:" << std::endl;

    std::cin >> a  >> op >>  b  ;

    switch (op)
    {
        case '+' : std::cout << "a+b =" << a+b << std::endl;
            break;
        case '-' : std::cout << "a-b =" << a-b << std::endl;
            break;
        case '/' : std::cout << "a/b =" << a/b << std::endl;
            break;
        case '*' : std::cout << "a*b =" << a*b << std::endl;
            break;
 
    }

   

}