#include <iostream>
using namespace std;

template <class T>  //Here T is substituted by the required data type
T maxim(T x,T y){
    return x>y?x:y;
}

int main(){
    int c=maxim(10,5);
    float d = maxim(10.5f,11.4f);
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;

}