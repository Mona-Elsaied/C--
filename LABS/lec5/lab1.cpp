#include <iostream>
#include <string>
using namespace std;

class Person {
  protected:
    string name;
    int age;
  public:

    Person(string n, int a) {
      name = n;
      age = a;
    }
    void display() {
      cout << "Name: " << name << endl;
      cout << "Age: " << age << endl;
    }
};

class Student : protected Person {
  private:
    int rollNo;
  public:
    Student(string n, int a, int r) : Person(n, a) {
      rollNo = r;
    }
    void displayStudent() {
      display();
      cout << "Roll No: " << rollNo << endl;
    }
};



int main() {
  Student s("John", 20, 1234);
  s.displayStudent();
  return 0;
}