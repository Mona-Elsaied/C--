#include <iostream>
#include<string>

using namespace std ;

// city 1
namespace city_1 {


void population (int p)
{
    cout << "population of city_1:" << p << endl;

}
void  families (int f)
{
    cout << "families  of city_1:" << f << endl;

}
void employees(int e)
{
    cout << "employees of city_1:" << e << endl;
}
void students (int s)
{
     cout << "students of city_1:" << s << endl;
}


}

// city 2
namespace city_2 {

void population (int p)
{
    cout << "population of city_2:" << p << endl;

}
void  families (int f)
{
    cout << "families  of city_2:" << f << endl;

}
void employees(int e)
{
    cout << "employees of city_2:" << e << endl;
}
void students (int s)
{
     cout << "students of city_2:" << s << endl;
}



}
// city 3
namespace city_3 {

void population (int p)
{
    cout << "population of city_3:" << p << endl;

}
void  families (int f)
{
    cout << "families  of city_3:" << f << endl;

}
void employees(int e)
{
    cout << "employees of city_3:" << e << endl;
}
void students (int s)
{
     cout << "students of city_3:" << s << endl;
}
}


/* // to edit 
namespace Edit_cities {

}
// to clear 
namespace Clear_cities {

}
 */

// using template 
template <typename T1 , typename T2  ,  typename  R >
R sum_cities(T1  c1 , T2  c2 )
{
    return c1+c2;
}





// main function 
int main()
{
    int var_0[12];
    for (int i =0 ; i<=12 ; )
    {
    cin >>var_0[i];
    }
   
    city_1::population(var_0[0]);
    city_1::families(var_0[1]);
    city_1::employees(var_0[2]);
    city_1::students(var_0[3]);


    city_2::population(var_0[4]);
    city_2::families(var_0[5]);
    city_2::employees(var_0[6]);
    city_2::students(var_0[7]);

    city_3::population(var_0[8]);
    city_3::families(var_0[9]);
    city_3::employees(var_0[10]);
    city_3::students(var_0[11]);

    cout <<"sum of population of 2 cities :" << sum_cities(city_1::population , city_2::population) << endl;
    cout <<"sum of students of 2 cities :" << sum_cities(city_1::students , city_2::students) << endl;
    
}