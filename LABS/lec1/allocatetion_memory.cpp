
/*
#include <iostream>
#include<string>

using namespace std;
int main ()
{
    // declare an integer pointer
    int * ptr_int ;
    float  * ptr_float ;

    // dynamically allocate memory for an int variable 
    ptr_int=new int;
    ptr_float=new float;
    // assign val 
    *ptr_int = 45;
    *ptr_float =45.5;
    // printing 
    cout << *ptr_int <<endl;
    cout << *ptr_float <<endl;
    delete ptr_int;
    delete ptr_float;

    //cout << *ptr_int  <<endl ;

}
*/


// array

#include <iostream>
using namespace std;

int main() {

  int num;
  cout << "Enter total number of students: ";
  cin >> num;
  float* ptr;
    
  // memory allocation of num number of floats
  ptr = new float[num];

  cout << "Enter GPA of students." << endl;
  for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": ";
    cin >> *(ptr + i);
  }

  cout << "\nDisplaying GPA of students." << endl;
  for (int i = 0; i < num; ++i) {
    cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
  }

  // ptr memory is released
  delete[] ptr;

  return 0;
}
