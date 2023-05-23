#include <iostream>
#include<string>

using namespace std ;

namespace Shapes_area {

    
    
    double area;
    void circle (void)
    {
          int a , b;
    cin>>a;
    cin>>b;
          cout << "area of circle =" << a*b  << endl;
    }

    void square (void)
    {
         int a , b;
    cin>>a;
    cin>>b;
         cout << "area of square =" << a*b  << endl;
    }

    void triangle (void)
    {
          int a , b;
    cin>>a;
    cin>>b;
          cout << "area of triangle =" << a*b  << endl;
    }

}

namespace Shapes_Perimeter {

    
    double Perimeter;
  
    void circle (void)
    {
          int x , y;
     cin>>x;
    cin>>y;
          cout << "Perimeter of circle =" << x+y  << endl;
          
    }

    void square (void)
    {
        int x , y;
     cin>>x;
    cin>>y;
        cout << "Perimeter of square =" << x+y  << endl;
         
    }

    void triangle (void)
    {
        int x , y;
     cin>>x;
    cin>>y;
        cout << "Perimeter of triangle =" << x+y   << endl;
          
    }

}


int main ()
{
    Shapes_Perimeter:: circle ();
    cout<<"=======" <<endl;

     Shapes_Perimeter:: square ();
cout<<"=======" <<endl;
      Shapes_Perimeter:: triangle();
      cout<<"=======" <<endl;
    Shapes_area:: circle  ();
    cout<<"=======" <<endl;
     Shapes_area:: square ();
     cout<<"=======" <<endl;
     Shapes_area:: triangle() ;
     cout<<"=======" <<endl;
    
}