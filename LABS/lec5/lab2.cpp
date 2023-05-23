#include <iostream>
using namespace std;

class Shape {
  public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
    
};

class Rectangle : public Shape {
  private:
    float width;
    float height;
  public:
    Rectangle(float w, float h) {
      width = w;
      height = h;
    }
    float area() {
      return width * height;
    }

    float perimeter() {
      return (width + height)*2;
    }
};

class Circle : public Shape {
  private:
    float radius;
  public:
    Circle(float r) {
      radius = r;
    }
    float area() {
      return 3.14 * radius * radius;
    }
    float perimeter() {
      return radius * 2* 3.14 ;
    }

};

int main() {
  Rectangle rect(2, 4);
  Circle circle(3.5);


  cout << "Area of rectangle: " << rect.area() << endl;
  cout << "perimeter of rectangle: " << rect.perimeter() << endl;

  cout << "Area of circle: " << circle.area() << endl;
  cout << "perimeter of circle: " << circle.perimeter() << endl;

  return 0;
}