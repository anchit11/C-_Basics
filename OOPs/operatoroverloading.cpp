#include <iostream>

using namespace std;

class complex{
    public:
        int real;
        int img;
        complex(int r=0,int i = 0);
        // complex operator+(complex c);

        //friend function
        friend complex operator+(complex c1, complex c2);
};
int main(){
    complex c1,c2(8,2),c;
    c =c1+c2;
    cout<<c.real<<"+"<<c.img<<"i"<<endl;
}

complex::complex(int r,int i){
    real = r;
    img = i;
}

// complex complex::operator+(complex c){
//     complex temp;
//     temp.real= real+c.real;
//     temp.img = img+c.img;
//     return temp;
// }
complex operator+(complex c1,complex c2){
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}