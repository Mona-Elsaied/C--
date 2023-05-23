#include <iostream>
#include<string>

using namespace std ;

template <typename T1 ,typename T2>

void print_sum (T1 a , T2  b)
{
    cout << a << "+" << b <<"=" <<  a+b << endl;
}

int main()
{
    print_sum(3,4);
    print_sum("hi", 5);
    print_sum('h' , 'i');
    print_sum(1.11 , 2.22);
}