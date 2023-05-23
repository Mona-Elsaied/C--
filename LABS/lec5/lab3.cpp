#include <iostream>
using namespace std;

template  < typename T>
class Myclass 
{
   private :
   T value ;

   public :
   Myclass (T val) : value (val){}

   void SetValue (T value)
   {
    value =  value ;
   }

   T GetValue()  const
   {
       return value
   }
};

int main()
{

}
