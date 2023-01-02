#include <iostream>
using namespace std;

int func(float a, int b){
    return a+b;
}

int func(int a, float b){
    return a-b;
}

int main(){
    int a = func(16.5f,5);
    int b =  func(16.5,17.5f);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}