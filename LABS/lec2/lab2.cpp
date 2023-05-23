#include <iostream>
#include <string>

using namespace std;

///////////////////////classes 

// in  classes  3 key words  (public  -- private  -- protected)
//public ->> members are accessible from outside the class
//private ->> members cannot be accessed (or viewed) from outside the class
//protected ->> members cannot be accessed from outside the class
/*
class Hospital_1 {

    public:
      string  name ;
      string  gender ;
      int age ;

      



    private :


};

class Hospital_2 {

    public:
      Hospital_2()
       {
        
        cout << "hi" << endl;
      }

    private :


};

 //void Hospital_2::display (void)
     

int main()
{
    Hospital_1  patient ;
    patient.name = "mona";
    patient.gender = "f";
    patient.age = 23;

    cout << patient.name << endl;
    cout << patient.gender << endl;
    cout << patient.age << endl;

    Hospital_2   h;


}

*/


// try constructors  & deconstructors   (lab1 -> lec3)
/*
class car 
{
    public :
    string brand ;
    string model ;
    int year;
    int count;


   car(string x , string y , int z)
    {
        brand =x ;
        model = y;
        year = z;
        
    }

    counter (int o , int p , int l){}

    ~car()
    {
        cout<<"Bye"<<endl;
    }
   
   
};
*/

class counter 
{
    private :
    int count=10 ;
    int a=5 , b=3;
    public:
    counter():count(10){}
    counter(int c) : count(c){}
     int get_count ()
    {
        return count ;
    }

    counter operator -- ()
    {
         cout << "count before = " <<    count<<  endl;
        --count;
        cout << "count after = " <<    count<<  endl;
        return counter(count);
        
    }

    counter operator ++ ()
    {
         cout << "count before = " <<    count<<  endl;
        ++count;
        cout << "count after = " <<    count<<  endl;
        return counter(count);
        
    }

    counter operator +(counter op)
    {
        
        counter temp;
        temp.a = a + op.a;
        temp.b = b + op.b;
        return temp;
        
    }

    counter operator -(counter op)
    {
        
        counter temp;
        temp.a = a - op.a;
        temp.b = b - op.b;
        return temp;
        
    }
    counter operator *(counter op)
    {
        
        counter temp;
        temp.a = a * op.a;
        temp.b = b * op.b;
        return temp;
        
    }

    counter operator /(counter op)
    {
        
        counter temp;
        temp.a = a /op.a;
        temp.b = b / op.b;
        return temp;
        
    }



    void print()
    {
        
        cout << count<<endl;
        cout << a << "+" << b << endl;
    }
};
// static out of class
//int car::counter=0;

int main()

{ 
    counter c_1  , c_2 , c_3;
    counter res ;
    c_1.get_count();
    c_2 =++c_1;
    c_2.print();
    c_3=--c_1;


    res = (c_1 * c_2)+(c_3 / c_1)-c_2;

    counter c_2 = --c_1;
    counter c_3 = --c_2;

    c_1.print();
    c_2.print();
    c_3.print();

    counter obj_1 , obj_2 ;
    res = obj_1 +obj_2;
    res.print();
    res =obj_1 - obj_2;
    res.print();

    
    
    
    // car  h ("hh" , "ooo" , 155);
    // car  h_1 ("mmm" , "ojho" , 175);
    // car  h_2 ("nnn" , "yy" , 195);
    // cout << h.brand <<" " << h.model << " " << h.year <<" "<<h.counter<< "\n";
    // cout << h_1.brand <<" " << h_1.model << " " << h_1.year <<" "<<h_1.counter<< "\n";
    // cout << h_2.brand <<" " << h_2.model << " " << h_2.year <<" "<<h_2.counter<< "\n";

}











// try private 
/*
class myclass 
{
    public :
    int x;

    private:
    int y ;

};

int main ()
{
    myclass h;
    h.x=66;
    h.y=88;  // error as it's private
}
*/



// static method serve  things out class 
// if you want use func static and var , var must be static 

/*
class car
{  public :
    
    static void Print_num(int n)
    {
        cout << "num is :" << n << endl;
    }
    
    string brand ;
    string model ;
    int year;





};

int main()
{
     car::Print_num(25);
}
 */

// the default copy constructor 
/*
class Distance 
{
     private:
     int feet ;
     float inches;

     public:

     Distance() : feet(0) , inches(0){}
     Distance(int f , float i ): feet(f) , inches(i){
       
     }

     void Distance::setDistance (int f , float i)
     {
        feet =f;
        inches=i;
     }

     void Distance::print ()
     {
         cout << "feet :" << feet <<endl;
        cout << "inch: " << inches<< endl;
     }

     ~Distance()
     {
        cout<<"finish" <<endl;
     }

};

int main()
{
     Distance  d1;
     Distance dis_1(1 , 1.5);
     Distance dis_2 (dis_1);
     Distance dis_3 = dis_2;
     dis_3.print();
     dis_3.setDistance(6 , 5.6);

}

*/