#include <iostream>
using namespace std;

class Shape{
public:
    virtual float area()=0;
    virtual float perimeter()=0;
};
class Rectangle: public Shape{
    private:
    float length;
    float breadth;
    public:
    Rectangle(int l,int b);
    float area();
    float perimeter();
};

class Circle:public Shape{
    private:
    float radius;
    public:
    Circle(int r);
    float area();
    float perimeter();
};

int main(){
    Shape *s = new Rectangle(4,6);
    cout<<"Area of Rectangle is "<<s->area()<<endl;
    cout<<"Perimeter of Rectangle is "<<s->perimeter()<<endl;

    s = new Circle(7);
    cout<<"Area of Circle is "<<s->area()<<endl;
    cout<<"Perimeter of Circle is "<<s->perimeter()<<endl;
    return 0;
}

Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}

float Rectangle::area(){
    return length*breadth;
}

float Rectangle::perimeter(){
    return 2*(length+breadth);
}

Circle::Circle(int r){
    radius = r;
}

float Circle::area(){
    return 3.14 * radius * radius;
}

float Circle::perimeter(){
    return 6.28 * radius;
}