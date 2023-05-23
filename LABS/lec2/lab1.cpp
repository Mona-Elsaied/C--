#include <iostream>
#include<string>

using namespace std ;


class school
    {
        private :
        int MaxStudent_number;
        int Student_number=0;
        int Teacher_number;

        public:
        string name;
        void Set_name(void)
        {
           
           cout<< "Name : " ;
           cin >> name;
        }

        void Set_MaxStudent(int stu)
        {
              
            if (stu > 100)
            {
                MaxStudent_number=stu;
            }
            else 
            {
                cout<<"invalid number" <<endl;
            }
             
        }

        void Add_Student(void)
        {
            Student_number++;
        }

        void set_Teacher_number(int target)
        {
            Teacher_number=target;
        }

        void Show_School_data(void)
        {
            cout << "name = " << name  << endl;
            cout << "MaxStudent_number = " << MaxStudent_number << endl;
            cout << "Student_number = " << Student_number <<endl;
            cout << "Teacher_number =" << Teacher_number<< endl;

        }
        
    };

int main()
{
    school a ;
    a.Set_name();
    a.Add_Student();
    a.Add_Student();
    a.Add_Student();
    a.Add_Student();
    a.Add_Student();


    a.Set_MaxStudent(120);
    a.set_Teacher_number(30);

    a.Show_School_data();


school b ;
    b.Set_name();
    b.Add_Student();
    b.Add_Student();
    b.Add_Student();
    b.Add_Student();
    b.Add_Student();
    b.Add_Student();
   


    b.Set_MaxStudent(150);
    b.set_Teacher_number(20);

    b.Show_School_data();



    return 0;
    
}
