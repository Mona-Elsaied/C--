#include <iostream>
#include <string>

using namespace std;


class based
{
   public:
   virtual  void func(int x)
   {
    cout<< "my function in based " << x << endl;
   }
};

class derived : public based
{
  public:
  void func(int x)  override
   {
    cout<< "my function in derived " << x << endl;
   }
};

int main ()
{
    derived d_1;
    d_1.func(5 );


}