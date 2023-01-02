#include <iostream>
using namespace std;

class StackOverflow: public exception{};
class StackUnderflow: public exception{};

class Stack{
    private:
        int size;
        int *stk;
        int top = -1;

    public:
        Stack(int s){
            size =s;
            stk = new int[s];
        }

        void push(int n){
            if (top == size-1){
                throw StackOverflow();
            }
            top++;
            stk[top]=n;
        }

        int pop(){
            if(top==-1){
                throw StackUnderflow();
            }
            return stk[top--];
        }
};
int main(){
    Stack s(3);
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    s.push(4);

}