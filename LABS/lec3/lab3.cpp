#include <iostream>
#include <string>

using namespace std;


class person 
{
    private :
    string name;
    string gender;
    double age;

    public :
    // constructor
    //person():name("mooo") , gender( "f" ) ,  age (0){}
    //person(string n , string g , double a): name(n) , gender(g ) ,  age (a){}

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

     virtual void display()
    {
        cout << "name : " << name<< endl;
        cout << "gender : " << gender<< endl;
        cout << "age : " << age << endl;
    }


};

class student : virtual public person 
{ 
    private : 
    string address;
    double GPA ;
    public :

    //student(string addr,double GA ):address(addr) , GPA(GA){}
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

class employee : virtual  public person 
{ 
    private : 
    
    string sport;
    double salary ;
    public :

    //employee():address("hhhh") , salary(20) , sport("football") {}
    
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
        cout << "sport :" << sport << endl;
        cout << "salary : " << salary <<endl;
    }


};

class MultiTask_man : virtual public employee ,virtual public student 
{
  
  private :
  int work_hour ;
  int study_hour ;
  string course ;

  public :
  void set_work_hour (int loc_workhour )
  {
    work_hour=loc_workhour;
  }

  void set_study_hour (int loc_study_hour )
  {
    study_hour=loc_study_hour;
  }

  void set_course(string loc_course )
  {
    course=loc_course;
  }

  void display ()
  {
    student::display();
    employee:: display();
    cout << "work_hour: " <<work_hour << endl;
    cout << "study_hour: "<<study_hour<<endl;
    cout << "course: " <<course<<endl;
    

  }


}; 

int main()
{
    MultiTask_man  s_1 ;
    s_1.set_name("blaaaa");
    s_1.set_gender("f");
    s_1.set_age(24);
    s_1.set_address("address bla bla ");
    s_1.set_GPA(3.4);
    s_1.set_sport("football");
    s_1.set_salary(20);
    s_1.set_work_hour(5);
    s_1.set_study_hour(5);
    s_1.set_course("english");
    s_1.display();


}