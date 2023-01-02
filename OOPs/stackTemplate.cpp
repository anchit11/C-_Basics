#include <iostream>
using namespace std;

class stackOverflow:exception{};
class stackUnderflow:exception{};

template<class T>

class stack{
    private:
        T *stk;
        int size;
        int top=-1;
    public:
        stack(int n){
            size = n;
            stk = new int[size];
        }

        void push(T n);
        T pop();
};
int main(){
    stack<float> s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
}
template<class T>
void stack<T>::push(T n){
    if (top==size-1){
        throw stackOverflow();
    }
    stk[++top]=n;
}
template<class T>
T stack<T>::pop(){
    if(top==-1){
        throw stackUnderflow();
    }
    return stk[top--];
}
