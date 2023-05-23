#include <iostream>
#include <string>

using namespace std;

// inheritance   

class person 
{
    private :
    string name;
    string gender;
    double age;

    public :
    // constructor
    person():name("mooo") , gender( "f" ) ,  age (0){}
    person(string n , string g , double a): name(n) , gender(g ) ,  age (a){}

    // to set name 
    void set_name(string n)
    {
        name =n;
    }
    // to get name 
    string get_name()
    {
        return name;
    }

    // to set gender 
    void set_gender(string g)
    {
        gender =g;
    }
    // to get gender 
    string get_gemder()
    {
        return gender;
    }
    // to set age
    void set_age(double a)
    {
        age =a;
    }
    // to get age 
    double get_age()
    {
        return age;
    }

    void display()
    {
        cout << "name : " << name<< endl;
        cout << "gender : " << gender<< endl;
        cout << "age : " << age << endl;
    }


};

////////////////////////////////////////////////////////////////////
//class student 
class student :  public person 
{ 
    private : 
    string address;
    double GPA ;
    public :

    student():address("hhhh") , GPA(3.5) {}
    // to set address 
    void set_address(string addr)
    {
        address =addr;
    }
    // to get address 
    string get_address()
    {
        return address;
    }
    
    
    // to set GPA
    void set_GPA(double p)
    {
        GPA =p;
    }
    // to get GPA 
    double get_GPA()
    {
        return GPA;
    }

    // possible  to be the same name of main function
     void display()      
    {
        //  using scope operator  to get func from main class
        person::display();
        cout << "Address :" << address << endl;
        cout << "GPA : " << GPA <<endl;
    }


};
/////////////////////////////////////////////////////////////////////////
class MiniStudent : public student 
{ 
    private : 
    string hobbies;
    double ID ;
    public :

    MiniStudent():hobbies("reading") , ID(999) {}
    // to set hobbies 
    void set_hobbies(string hobb)
    {
        hobbies =hobb;
    }
    // to get hobbies 
    string get_hobbies()
    {
        return hobbies;
    }
    
    
    // to set ID
    void set_ID(double i)
    {
        ID =i;
    }
    // to get ID 
    double get_ID()
    {
        return ID;
    }

    // possible  to be the same name of main function
    void display()     
    {
        //  using scope operator  to get func from main class
        student::display();
        cout << "hobbies :" << hobbies << endl;
        cout << "ID : " << ID <<endl;
    }


};

////////////////////////////////////////////////////////////////////////////////
// Class of employee
class employee : public person 
{ 
    private : 
    string address;
    string sport;
    double salary ;
    public :

    employee():address("hhhh") , salary(20) , sport("football") {}
    // to set address 
    void set_address(string addr)
    {
        address =addr;
    }
    // to get address 
    string get_address()
    {
        return address;
    }
    
    
    // to set sport 
    void set_sport(string sp)
    {
        sport =sp;
    }
    // to get sport 
    string get_sport()
    {
        return sport;
    }
    
    // to set salary
    void set_salary(double s)
    {
        salary =s;
    }
    // to get salary 
    double get_salary()
    {
        return salary;
    }

    // possible  to be the same name of main function
    void display()
    {
        //  using scope operator  to get func from main class
        person::display();
        cout << "Address :" << address << endl;
        cout << "salary : " << salary <<endl;
    }


};
//////////////////////////////////////////////////////////////////////////

int main()
{
    person p_1("mmm" , "nnn" , 6);
    p_1.display();
    cout<< "+++++++++++++++++++++"<<endl;
    person p_2;
    p_2.display();
    
    cout<< "+++++++++++++++++++++"<<endl;
    cout<< "class student"<<endl;
    student s_1 ;
    s_1.display();
    cout<< "+++++++++++++++++++++"<<endl;
    cout<< "class employee"<<endl;
    employee e_1;
    e_1.display();
    cout<< "+++++++++++++++++++++"<<endl;
    cout<< "class Mini student"<<endl;
    MiniStudent m_1;
    m_1.display();
    
   
}