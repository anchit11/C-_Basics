#include <iostream>
using namespace std;

class rectangle{
    public:
        int length;
        int breadth;

        int area(){
            return length * breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
};
int main(){
    rectangle r1;
    rectangle *p;
    p=&r1;
    rectangle *q = new rectangle;
    q->length = 160;
    p->length = 120;
    p->breadth = 150;
    cout<<p->area()<<endl;
    cout<<r1.perimeter()<<endl;
    cout<<q->length<<endl;
    return 0;
}