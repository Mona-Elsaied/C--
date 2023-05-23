#include <iostream>
using namespace std;
class complex 
{
    int a, b; 
    public:

    void get_data(){
        cout << "Enter the value of Complex Numbers a, b: "; cin >> a >> b;
    }
  
    complex operator+(complex ob)
    {
        complex t;
        t.a = a + ob.a; 
        t.b = b + ob.b;
        return (t); 
    }
   
    complex operator-(complex ob)
    {
        complex t;
        t.a = a - ob.a;
        t.b = b - ob.b;
        return (t);
    }
  
  complex operator*(complex ob)
    {
        complex t;
        t.a = a * ob.a;
        t.b = b * ob.b;
        return (t);
    }
  
  complex operator/(complex ob)// overaloded operator function /
    {
        complex t;
        t.a = a / ob.a;
        t.b = b / ob.b;
        return (t);
    }
  // Overloading the prefix operator
    complex& operator++()
    {
        ++a;
    ++b;
        // returned value should be a reference to *this
        return *this;
    }
  
  // Overloading the prefix operator
  complex& operator--()
  {
    --a;
    --b;
    // returned value should be a reference to *this
    return *this;
  }
  
   
    void display(){
        cout << a << "+" << b << "i" << "\n";
    }
};

int main() 
{
    complex obj1, obj2, obj3, result;
    obj1.get_data();
    obj2=++ obj1;
  
  cout << "\nobj2:";
  obj2.display();
  
  obj3=-- obj1;
  cout << "\nobj3:";
  obj3.display();
    
    result = (obj1 * obj2)+(obj3 / obj1)-obj2;
    
  cout << "\nobj1:";
  obj1.display();
  
    

    cout << "\nResult:";
  
    result.display();
    
    
    return 0;
}