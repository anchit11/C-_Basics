#include <iostream>

using namespace std;

int main(){
    int n1,n2;
    char op;

    cout<<"Enter two number: ";
    cin>>n1>>n2;

    cout<<"Enter the operator: ";
    cin>>op;

    switch(op){

        case '+':
        cout<<n1+n2<<endl;
        break;

        case '-':
        cout<<n1-n2<<endl;
        break;

        case '*':
        cout<<n1*n2<<endl;
        break;

        case '/':
        cout<<n1/n2<<endl;
        break;

        default:
        cout<<"Invalid basic operator"<<endl;
        break;
    }
}